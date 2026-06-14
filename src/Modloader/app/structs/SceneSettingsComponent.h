#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSettingsComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSettingsComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettingsComponent_DEFINED)
#include <Modloader/app/structs/SceneSettingsComponent__Fields.h>
#if defined(IL2CPP_STRUCT_SceneSettingsComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneSettingsComponent_DEFINED
struct SceneSettingsComponent__Class;
struct SceneSettingsComponent {
    struct SceneSettingsComponent__Class* klass;
    MonitorData* monitor;
    struct SceneSettingsComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSettingsComponent_FWDDECL)
#define IL2CPP_STRUCT_SceneSettingsComponent_FWDDECL
#include <Modloader/app/structs/SceneSettingsComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneSettingsComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettingsComponent_DEFINED) && !defined(IL2CPP_STRUCT_SceneSettingsComponent_FWDDECL)
#include <Modloader/app/structs/SceneSettingsComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSettingsComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
