#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleAimingSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleAimingSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAimingSystem_DEFINED)
#include <Modloader/app/structs/SimpleAimingSystem__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleAimingSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleAimingSystem_DEFINED
struct SimpleAimingSystem__Class;
struct SimpleAimingSystem {
    struct SimpleAimingSystem__Class* klass;
    MonitorData* monitor;
    struct SimpleAimingSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleAimingSystem_FWDDECL)
#define IL2CPP_STRUCT_SimpleAimingSystem_FWDDECL
#include <Modloader/app/structs/SimpleAimingSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleAimingSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAimingSystem_DEFINED) && !defined(IL2CPP_STRUCT_SimpleAimingSystem_FWDDECL)
#include <Modloader/app/structs/SimpleAimingSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleAimingSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
