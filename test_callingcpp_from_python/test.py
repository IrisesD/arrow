import ctypes
from ctypes import cdll

lib = cdll.LoadLibrary('./libfoo.so')

lib.bar_wrapper.argtypes = []
lib.bar_wrapper.restype = None
lib.bar_wrapper()
