#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreferBinarySerialization_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreferBinarySerialization_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreferBinarySerialization_DEFINED)
#define IL2CPP_STRUCT_PreferBinarySerialization_DEFINED
struct PreferBinarySerialization__Class;
struct PreferBinarySerialization {
    struct PreferBinarySerialization__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PreferBinarySerialization_FWDDECL)
#define IL2CPP_STRUCT_PreferBinarySerialization_FWDDECL
#include <Modloader/app/structs/PreferBinarySerialization__Class.h>
#endif
#undef IL2CPP_STRUCT_PreferBinarySerialization_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreferBinarySerialization_DEFINED) && !defined(IL2CPP_STRUCT_PreferBinarySerialization_FWDDECL)
#include <Modloader/app/structs/PreferBinarySerialization.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreferBinarySerialization.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
