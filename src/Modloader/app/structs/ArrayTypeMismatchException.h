#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayTypeMismatchException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayTypeMismatchException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayTypeMismatchException_DEFINED)
#include <Modloader/app/structs/ArrayTypeMismatchException__Fields.h>
#if defined(IL2CPP_STRUCT_ArrayTypeMismatchException__Fields_DEFINED)
#define IL2CPP_STRUCT_ArrayTypeMismatchException_DEFINED
struct ArrayTypeMismatchException__Class;
struct ArrayTypeMismatchException {
    struct ArrayTypeMismatchException__Class* klass;
    MonitorData* monitor;
    struct ArrayTypeMismatchException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrayTypeMismatchException_FWDDECL)
#define IL2CPP_STRUCT_ArrayTypeMismatchException_FWDDECL
#include <Modloader/app/structs/ArrayTypeMismatchException__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrayTypeMismatchException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayTypeMismatchException_DEFINED) && !defined(IL2CPP_STRUCT_ArrayTypeMismatchException_FWDDECL)
#include <Modloader/app/structs/ArrayTypeMismatchException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayTypeMismatchException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
