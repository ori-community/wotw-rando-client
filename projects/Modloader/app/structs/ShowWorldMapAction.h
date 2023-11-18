#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowWorldMapAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowWorldMapAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowWorldMapAction_DEFINED)
#include <Modloader/app/structs/ShowWorldMapAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowWorldMapAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowWorldMapAction_DEFINED
struct ShowWorldMapAction__Class;
struct ShowWorldMapAction {
    struct ShowWorldMapAction__Class* klass;
    MonitorData* monitor;
    struct ShowWorldMapAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowWorldMapAction_FWDDECL)
#define IL2CPP_STRUCT_ShowWorldMapAction_FWDDECL
#include <Modloader/app/structs/ShowWorldMapAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowWorldMapAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowWorldMapAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowWorldMapAction_FWDDECL)
#include <Modloader/app/structs/ShowWorldMapAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowWorldMapAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
