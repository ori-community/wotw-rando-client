#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_DEFINED
struct MoonAnimator;
struct IAnimation;
struct MoonAnimator_AnimationInstance;
struct Action;
struct Func_1_Boolean_;
struct __declspec(align(8)) MoonAnimator_ActiveAnimation__Fields {
    struct MoonAnimator* m_animator;
    struct IAnimation* m_animation;
    struct MoonAnimator_AnimationInstance* m_animationInstance;
    struct Action* m_onStoppedPlaying;
    struct Action* m_onStartedPlaying;
    struct Func_1_Boolean_* m_continueCondition;
    bool m_startedPlaying;
    bool m_stopRequested;
    int32_t m_priority;
    float m_speed;
    float m_time;
    struct Nullable_1_Single_ m_crossfadeTimeOverride;
    bool m_isFinished;
    float m_weight;
    int32_t m_version;
    bool m_allocated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_ActiveAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
