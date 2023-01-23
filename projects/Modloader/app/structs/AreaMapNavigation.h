#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapNavigation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapNavigation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapNavigation_DEFINED)
#include <Modloader/app/structs/AreaMapNavigation__Fields.h>
#if defined(IL2CPP_STRUCT_AreaMapNavigation__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapNavigation_DEFINED
struct AreaMapNavigation__Class;
struct AreaMapNavigation {
    struct AreaMapNavigation__Class* klass;
    MonitorData* monitor;
    struct AreaMapNavigation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapNavigation_FWDDECL)
#define IL2CPP_STRUCT_AreaMapNavigation_FWDDECL
#include <Modloader/app/structs/AreaMapNavigation__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaMapNavigation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapNavigation_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapNavigation_FWDDECL)
#include <Modloader/app/structs/AreaMapNavigation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapNavigation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
