#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneSettingsTransitionZone_Direction__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_SceneSettingsTransitionZone_Direction__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_DEFINED
struct SceneSettings;
struct SceneSettingsTransitionZone__Fields {
    struct MonoBehaviour__Fields _;
    struct Rect m_boundingRect;
    struct SceneSettings* m_fromSettings;
    struct SceneSettings* m_toSettings;
    SceneSettingsTransitionZone_Direction__Enum m_direction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_FWDDECL
#include <Modloader/app/structs/SceneSettings.h>
#endif
#undef IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneSettingsTransitionZone__Fields_FWDDECL)
#include <Modloader/app/structs/SceneSettingsTransitionZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSettingsTransitionZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
