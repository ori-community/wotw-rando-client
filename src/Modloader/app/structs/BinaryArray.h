#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryArray_DEFINED)
#include <Modloader/app/structs/BinaryArray__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryArray__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryArray_DEFINED
struct BinaryArray__Class;
struct BinaryArray {
    struct BinaryArray__Class* klass;
    MonitorData* monitor;
    struct BinaryArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryArray_FWDDECL)
#define IL2CPP_STRUCT_BinaryArray_FWDDECL
#include <Modloader/app/structs/BinaryArray__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryArray_DEFINED) && !defined(IL2CPP_STRUCT_BinaryArray_FWDDECL)
#include <Modloader/app/structs/BinaryArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
