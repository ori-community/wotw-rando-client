#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnableMapAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnableMapAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableMapAction_DEFINED)
#include <Modloader/app/structs/EnableMapAction__Fields.h>
#if defined(IL2CPP_STRUCT_EnableMapAction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnableMapAction_DEFINED
struct EnableMapAction__Class;
struct EnableMapAction {
    struct EnableMapAction__Class* klass;
    MonitorData* monitor;
    struct EnableMapAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnableMapAction_FWDDECL)
#define IL2CPP_STRUCT_EnableMapAction_FWDDECL
#include <Modloader/app/structs/EnableMapAction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnableMapAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableMapAction_DEFINED) && !defined(IL2CPP_STRUCT_EnableMapAction_FWDDECL)
#include <Modloader/app/structs/EnableMapAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnableMapAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
