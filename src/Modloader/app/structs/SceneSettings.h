#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettings_DEFINED)
#include <Modloader/app/structs/SceneSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SceneSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneSettings_DEFINED
struct SceneSettings__Class;
struct SceneSettings {
    struct SceneSettings__Class* klass;
    MonitorData* monitor;
    struct SceneSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSettings_FWDDECL)
#define IL2CPP_STRUCT_SceneSettings_FWDDECL
#include <Modloader/app/structs/SceneSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettings_DEFINED) && !defined(IL2CPP_STRUCT_SceneSettings_FWDDECL)
#include <Modloader/app/structs/SceneSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
