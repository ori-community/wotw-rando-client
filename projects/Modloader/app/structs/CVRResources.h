#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRResources_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRResources_DEFINED)
#include <Modloader/app/structs/CVRResources__Fields.h>
#if defined(IL2CPP_STRUCT_CVRResources__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRResources_DEFINED
struct CVRResources__Class;
struct CVRResources {
    struct CVRResources__Class* klass;
    MonitorData* monitor;
    struct CVRResources__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRResources_FWDDECL)
#define IL2CPP_STRUCT_CVRResources_FWDDECL
#include <Modloader/app/structs/CVRResources__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRResources_DEFINED) && !defined(IL2CPP_STRUCT_CVRResources_FWDDECL)
#include <Modloader/app/structs/CVRResources.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRResources.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
