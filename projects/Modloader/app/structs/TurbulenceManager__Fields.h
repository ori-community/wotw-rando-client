#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceManager__Fields_DEFINED
struct TurbulenceSettings;
struct SceneDefaultSettingsHelper;
struct TurbulenceManagerBinder;
struct SceneRoot;
struct TurbulenceManager__Fields {
    struct MonoBehaviour__Fields _;
    struct TurbulenceSettings* DefaultSettings;
    struct SceneDefaultSettingsHelper* m_defaultSettingsHelper;
    struct TurbulenceManagerBinder* m_binder;
    struct SceneRoot* m_sceneRoot;
    float m_lastTimelineSet;
    bool m_isAnimating;
    float m_lastTimelineTime;
    float m_legacyTimelineSpeed;
    float m_legacyTimelineStr;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceManager__Fields_FWDDECL
#include <Modloader/app/structs/SceneDefaultSettingsHelper.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/TurbulenceManagerBinder.h>
#include <Modloader/app/structs/TurbulenceSettings.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceManager__Fields_FWDDECL)
#include <Modloader/app/structs/TurbulenceManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
