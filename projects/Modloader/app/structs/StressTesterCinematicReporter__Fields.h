#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_DEFINED
struct GameplayToCinematicEntity;
struct FixedDurationSceneEntity;
struct String;
struct StressTesterCinematicReporter__Fields {
    struct MonoBehaviour__Fields _;
    struct GameplayToCinematicEntity* m_lastSetGameplayToCinematicEntity;
    struct FixedDurationSceneEntity* m_lastSetFixedDurationSceneEntity;
    struct String* m_currentGameplayToCinematicEntityHierarchy;
    struct String* m_currentFixedDurationSceneEntityHierarchy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_FWDDECL)
#define IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_FWDDECL
#include <Modloader/app/structs/FixedDurationSceneEntity.h>
#include <Modloader/app/structs/GameplayToCinematicEntity.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StressTesterCinematicReporter__Fields_FWDDECL)
#include <Modloader/app/structs/StressTesterCinematicReporter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTesterCinematicReporter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
