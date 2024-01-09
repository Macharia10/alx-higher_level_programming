#!/usr/bin/python3

def new_in_line(my_list, index, element):
    if index < 0 or index >= len(my_list):
        return my_list[:]
    new_list = my_list[:]
    new_list[idx] = element
    return new_list
