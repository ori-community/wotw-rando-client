#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StunnBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StunnBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StunnBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_StunnBehaviour__Fields_DEFINED
struct ClipAnimation;
struct SoundProvider;
struct RootMotionProcessorData;
struct Locomotion;
struct ILocomotionTurningHandler;
struct StunnBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct ClipAnimation* StunnAnimation;
    struct SoundProvider* SoundProvider;
    bool ResetHorizontalSpeed;
    int32_t AnimationPriority;
    bool FaceTarget;
    struct RootMotionProcessorData* RootMotion;
    struct Locomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turninghandler;
    struct ActiveAnimationHandle m_animationState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StunnBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_StunnBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ClipAnimation.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_StunnBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StunnBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StunnBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/StunnBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StunnBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
