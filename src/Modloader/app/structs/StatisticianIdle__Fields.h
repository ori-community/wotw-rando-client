#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticianIdle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticianIdle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianIdle__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#include <Modloader/app/structs/StatisticianIdle_IdleStates__Enum.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_StatisticianIdle_IdleStates__Enum_DEFINED)
#define IL2CPP_STRUCT_StatisticianIdle__Fields_DEFINED
struct MoonTimeline;
struct IKLookPostprocess;
struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_;
struct StatisticianEntity;
struct StatisticianIdle__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline* TrackingPlayer;
    struct MoonTimeline* HideToTop;
    struct MoonTimeline* IdleTopA;
    struct MoonTimeline* IdleTopB;
    struct MoonTimeline* TopToHide;
    struct MoonTimeline* PeekLeft;
    struct MoonTimeline* PeekRight;
    struct MoonTimeline* TalkIdle;
    struct IKLookPostprocess* HeadIK;
    StatisticianIdle_IdleStates__Enum m_currentState;

    struct MoonTimeline* m_currentTimeline;
    struct Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_* m_recentlyUsedStates;
    float m_desiredIkWeigth;
    float m_trackingTimer;
    struct StatisticianEntity* m_statisticianEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticianIdle__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatisticianIdle__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_StatisticianIdle_IdleStates_System_Boolean_.h>
#include <Modloader/app/structs/IKLookPostprocess.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/StatisticianEntity.h>
#endif
#undef IL2CPP_STRUCT_StatisticianIdle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianIdle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatisticianIdle__Fields_FWDDECL)
#include <Modloader/app/structs/StatisticianIdle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticianIdle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
