#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints information about Python bytes objects
 * @p: PyObject pointer to the Python bytes object
 * Return: no return
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t size, i;
	char *bytes_str;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = ((PyVarObject *)p)->ob_size;
	bytes_str = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %zd\n", size);
	printf("  trying string: %s\n", bytes_str);
	printf("  first %zd bytes:", size < 10 ? size : 10);
	for (i = 0; i < size && i < 10; i++)
	{
		printf(" %02x", (unsigned char)bytes_str[i]);
	}
	printf("\n");
}

/**
 * print_python_list - Prints information about Python lists
 * @p: PyObject pointer to the Python list
 * Return: no return
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size, alloc, i;
	PyObject *obj;
	
	size = ((PyVarObject *)p)->ob_size;
	alloc = ((PyListObject *)p)->allocated;
	
	printf("[*] Size of the Python List = %zd\n", size);
	printf("[*] Allocated = %zd\n", alloc);
	
	for (i = 0; i < size; i++)
	{
		obj = ((PyListObject *)p)->ob_item[i];
		printf("Element %zd: %s\n", i, Py_TYPE(obj)->tp_name);
	}
}
