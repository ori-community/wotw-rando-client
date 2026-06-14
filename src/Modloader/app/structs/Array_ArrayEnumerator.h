#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Array_ArrayEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Array_ArrayEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_ArrayEnumerator_DEFINED)
#include <Modloader/app/structs/Array_ArrayEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_Array_ArrayEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Array_ArrayEnumerator_DEFINED
struct Array_ArrayEnumerator__Class;
struct Array_ArrayEnumerator {
    struct Array_ArrayEnumerator__Class* klass;
    MonitorData* monitor;
    struct Array_ArrayEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Array_ArrayEnumerator_FWDDECL)
#define IL2CPP_STRUCT_Array_ArrayEnumerator_FWDDECL
#include <Modloader/app/structs/Array_ArrayEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_Array_ArrayEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_ArrayEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_Array_ArrayEnumerator_FWDDECL)
#include <Modloader/app/structs/Array_ArrayEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Array_ArrayEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
