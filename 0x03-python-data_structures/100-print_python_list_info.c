#include <listobject.h>
#include <object.h>
#include <Python.h>

void 100-print_python_list_info(PyObject *p)
{
  long int size =PyList_Size(p);
  int i;
  PyListObject *obj = (PyListObject *p);

  printf("[*] Size of the Python List = %li\n", size);
  printf("[*] Allocated = %li\n", obj->allocated);
  for (i = 0; i < size; i++)
    {
      printf("Element %i: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
    }
}
