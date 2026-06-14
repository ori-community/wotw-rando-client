#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTimelineState__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTimelineState__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineState__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LegacyTimelineState__StaticFields_DEFINED
struct Action_1_Single_;
struct Action;
struct List_1_Moon_Timeline_ILegacyTimelineStateObserver_;
struct GameObject;
struct List_1_GenericPuppet_;
struct Animator;
struct LegacyTimelineState__StaticFields {
    float _CurrentTime_k__BackingField;
    bool _IsPlaying_k__BackingField;
    bool RefreshRequired;
    struct Action_1_Single_* OnPreviewablesSampledCallback;
    struct Action* OnTimelineStateChangeCallback;
    struct List_1_Moon_Timeline_ILegacyTimelineStateObserver_* s_observers;
    struct GameObject* s_ori;
    struct List_1_GenericPuppet_* s_puppets;
    struct Animator* s_oriAnimator;
    bool m_inPreviewMode;
    bool m_isOriAnimatorDrivingOri;
    bool m_shouldTimelineAnimateCamera;
};
#endif
#if !defined(IL2CPP_STRUCT_LegacyTimelineState__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTimelineState__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_GenericPuppet_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ILegacyTimelineStateObserver_.h>
#endif
#undef IL2CPP_STRUCT_LegacyTimelineState__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineState__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTimelineState__StaticFields_FWDDECL)
#include <Modloader/app/structs/LegacyTimelineState__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTimelineState__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
