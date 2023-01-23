#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_DEFINED
struct SceneRoot;
struct SceneSettings;
struct __declspec(align(8)) SceneDefaultSettingsHelper__Fields {
    float TweenTime;
    struct Vector3 m_lastPosition;
    float m_tweenDuration;
    float m_disableTweenSpeedThreshold;
    struct SceneRoot* m_currentToScene;
    struct SceneRoot* m_currentFromScene;
    struct SceneSettings* m_fromSettings;
    struct SceneSettings* m_toSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_FWDDECL
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneSettings.h>
#endif
#undef IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneDefaultSettingsHelper__Fields_FWDDECL)
#include <Modloader/app/structs/SceneDefaultSettingsHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneDefaultSettingsHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
