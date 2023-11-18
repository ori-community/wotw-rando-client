#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryObjectString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryObjectString_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectString_DEFINED)
#include <Modloader/app/structs/BinaryObjectString__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryObjectString__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryObjectString_DEFINED
struct BinaryObjectString__Class;
struct BinaryObjectString {
    struct BinaryObjectString__Class* klass;
    MonitorData* monitor;
    struct BinaryObjectString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryObjectString_FWDDECL)
#define IL2CPP_STRUCT_BinaryObjectString_FWDDECL
#include <Modloader/app/structs/BinaryObjectString__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryObjectString_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectString_DEFINED) && !defined(IL2CPP_STRUCT_BinaryObjectString_FWDDECL)
#include <Modloader/app/structs/BinaryObjectString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryObjectString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
