#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/PerformingAction__Fields.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D_State__Enum.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayCharacterAnimation3D_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_DEFINED
struct String;
struct MoonAnimation;
struct Condition_1;
struct StateMachineBehaviourProxy;
struct PlayCharacterAnimation3D_EventToAction__Array;
struct Transform;
struct PlayCharacterAnimation3D__Fields {
    struct PerformingAction__Fields _;
    struct String* Animation;
    struct MoonAnimation* NewAnimation;
    struct MoonAnimation* LoopAnimation;
    struct Condition_1* Condition;
    bool ApplyRootTransform;
    bool RootMotionDisablesStickToPlatforms;
    bool PlaceOnGround;
    bool WaitForFinish;
    struct StateMachineBehaviourProxy* TerminationEventSource;
    struct String* TerminationEventId;
    struct StateMachineBehaviourProxy* ConditionEventSource;
    struct String* ConditionEventId;
    bool Loop;
    struct Condition_1* LoopCondition;
    struct PlayCharacterAnimation3D_EventToAction__Array* AnimationEventsActions;
    float Speed;
    PlayCharacterAnimation3D_State__Enum m_state;

    struct Transform* m_rootJoint;
    bool m_terminationEventReceived;
    bool m_conditionEventReceived;
    bool m_inited;
    struct ActiveAnimationHandle m_animationState;
    bool m_animationStarted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/PlayCharacterAnimation3D_EventToAction__Array.h>
#include <Modloader/app/structs/StateMachineBehaviourProxy.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayCharacterAnimation3D__Fields_FWDDECL)
#include <Modloader/app/structs/PlayCharacterAnimation3D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayCharacterAnimation3D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
