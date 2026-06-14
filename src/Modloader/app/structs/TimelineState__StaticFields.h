#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineState__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineState__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineState__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TimelineState__StaticFields_DEFINED
struct TimelineState_NewTimelineStateTempHook;
struct Action_1_Single_;
struct Action;
struct List_1_Moon_Timeline_ITimelineStateObserver_;
struct TimelineState__StaticFields {
    struct TimelineState_NewTimelineStateTempHook* NewTimelineTempData;
    float _CurrentTime_k__BackingField;
    bool _IsPlaying_k__BackingField;
    bool RefreshRequired;
    bool _HierarchyUpdated_k__BackingField;
    bool _UndoRedoPerformed_k__BackingField;
    bool _IsScrubbing_k__BackingField;
    struct Action_1_Single_* OnPreviewablesSampledCallback;
    struct Action* OnTimelineStateChangeCallback;
    struct Action* OnSampleCameras;
    struct List_1_Moon_Timeline_ITimelineStateObserver_* s_observers;
    bool m_inPreviewMode;
    bool m_isOriAnimatorDrivingOri;
    bool m_shouldTimelineAnimateCamera;
    bool m_clipStructureUpdated;
    float m_motionBlurScale;
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineState__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TimelineState__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ITimelineStateObserver_.h>
#include <Modloader/app/structs/TimelineState_NewTimelineStateTempHook.h>
#endif
#undef IL2CPP_STRUCT_TimelineState__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineState__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineState__StaticFields_FWDDECL)
#include <Modloader/app/structs/TimelineState__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineState__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
