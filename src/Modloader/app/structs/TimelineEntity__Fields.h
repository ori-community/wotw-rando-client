#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimatorPlayState__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED
struct TimelineEntity;
struct PlaybackStatus;
struct IEventReciever;
struct TimelineEntity__Fields {
    struct MonoBehaviour__Fields _;
    struct TimelineEntity* LeftPadEntity;
    struct TimelineEntity* RightPadEntity;
    int32_t m_instanceId;
    bool m_instanceIdCached;
    bool _ExpandedByDefault_k__BackingField;
    bool _ShowSampling_k__BackingField;
    AnimatorPlayState__Enum _PlayState_k__BackingField;

    int32_t m_executionOrder;
    float m_timeScale;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct PlaybackStatus* m_status;
    struct IEventReciever* _EventReciever_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntity__Fields_FWDDECL
#include <Modloader/app/structs/IEventReciever.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/TimelineEntity.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntity__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
