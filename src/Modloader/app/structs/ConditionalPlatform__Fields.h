#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalPlatform__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalPlatform__Fields_DEFINED
struct Condition_1;
struct PlayerInsideZoneChecker;
struct MoonTimeline;
struct PlatformImplementation;
struct ConditionalPlatform__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* PlatformMoveCondition;
    bool PlayerRequiredOnPlatform;
    struct PlayerInsideZoneChecker* TriggerZone;
    struct MoonTimeline* ConditionTrueTimeline;
    struct MoonTimeline* ConditionFalseTimeline;
    struct PlatformImplementation* Implementation;
    bool m_playerIsOnPlatform;
    bool m_conditionWasTrue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConditionalPlatform__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformImplementation.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_ConditionalPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/ConditionalPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
