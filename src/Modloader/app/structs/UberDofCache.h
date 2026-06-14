#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberDofCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberDofCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberDofCache_DEFINED)
#include <Modloader/app/structs/UberDofCache__Fields.h>
#if defined(IL2CPP_STRUCT_UberDofCache__Fields_DEFINED)
#define IL2CPP_STRUCT_UberDofCache_DEFINED
struct UberDofCache__Class;
struct UberDofCache {
    struct UberDofCache__Class* klass;
    MonitorData* monitor;
    struct UberDofCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberDofCache_FWDDECL)
#define IL2CPP_STRUCT_UberDofCache_FWDDECL
#include <Modloader/app/structs/UberDofCache__Class.h>
#endif
#undef IL2CPP_STRUCT_UberDofCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberDofCache_DEFINED) && !defined(IL2CPP_STRUCT_UberDofCache_FWDDECL)
#include <Modloader/app/structs/UberDofCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberDofCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
