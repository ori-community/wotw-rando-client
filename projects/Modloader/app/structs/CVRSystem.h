#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSystem_DEFINED)
#include <Modloader/app/structs/CVRSystem__Fields.h>
#if defined(IL2CPP_STRUCT_CVRSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRSystem_DEFINED
struct CVRSystem__Class;
struct CVRSystem {
    struct CVRSystem__Class* klass;
    MonitorData* monitor;
    struct CVRSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRSystem_FWDDECL)
#define IL2CPP_STRUCT_CVRSystem_FWDDECL
#include <Modloader/app/structs/CVRSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSystem_DEFINED) && !defined(IL2CPP_STRUCT_CVRSystem_FWDDECL)
#include <Modloader/app/structs/CVRSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
