#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterfaceCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterfaceCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterfaceCache_DEFINED)
#include <Modloader/app/structs/InterfaceCache__Fields.h>
#if defined(IL2CPP_STRUCT_InterfaceCache__Fields_DEFINED)
#define IL2CPP_STRUCT_InterfaceCache_DEFINED
struct InterfaceCache__Class;
struct InterfaceCache {
    struct InterfaceCache__Class* klass;
    MonitorData* monitor;
    struct InterfaceCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterfaceCache_FWDDECL)
#define IL2CPP_STRUCT_InterfaceCache_FWDDECL
#include <Modloader/app/structs/InterfaceCache__Class.h>
#endif
#undef IL2CPP_STRUCT_InterfaceCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterfaceCache_DEFINED) && !defined(IL2CPP_STRUCT_InterfaceCache_FWDDECL)
#include <Modloader/app/structs/InterfaceCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterfaceCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
