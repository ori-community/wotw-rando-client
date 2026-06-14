#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryObjectWithMapTyped_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryObjectWithMapTyped_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped_DEFINED)
#include <Modloader/app/structs/BinaryObjectWithMapTyped__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryObjectWithMapTyped_DEFINED
struct BinaryObjectWithMapTyped__Class;
struct BinaryObjectWithMapTyped {
    struct BinaryObjectWithMapTyped__Class* klass;
    MonitorData* monitor;
    struct BinaryObjectWithMapTyped__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped_FWDDECL)
#define IL2CPP_STRUCT_BinaryObjectWithMapTyped_FWDDECL
#include <Modloader/app/structs/BinaryObjectWithMapTyped__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryObjectWithMapTyped_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped_DEFINED) && !defined(IL2CPP_STRUCT_BinaryObjectWithMapTyped_FWDDECL)
#include <Modloader/app/structs/BinaryObjectWithMapTyped.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryObjectWithMapTyped.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
