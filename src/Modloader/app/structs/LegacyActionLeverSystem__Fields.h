#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_DEFINED
struct ActionMethod;
struct MoonTimeline;
struct Condition_1;
struct ILever;
struct LegacyActionLeverSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod* LeverEnterAction;
    struct ActionMethod* LeverExitAction;
    struct ActionMethod* LeverGrabbedAction;
    struct ActionMethod* LeverReleasedAction;
    struct ActionMethod* LeverLeftAction;
    struct MoonTimeline* LeverLeftTimeline;
    struct ActionMethod* LeverRightAction;
    struct MoonTimeline* LeverRightTimeline;
    struct ActionMethod* LeverLeftFailedAction;
    struct ActionMethod* LeverRightFailedAction;
    struct ActionMethod* LeverMiddleAction;
    struct Condition_1* CanLeverLeft;
    struct Condition_1* CanLeverRight;
    struct ILever* m_lever;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/ILever.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyActionLeverSystem__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyActionLeverSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyActionLeverSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
