#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRunToTargetAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRunToTargetAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRunToTargetAction__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinRunToTargetAction__Fields_DEFINED
struct AnimationCurve;
struct Transform;
struct TextureAnimationWithTransitions;
struct SeinRunToTargetAction__Fields {
    struct PerformingAction__Fields _;
    struct AnimationCurve* SpeedCurve;
    struct Transform* TargetPosition;
    struct TextureAnimationWithTransitions* CustomWalkMovingAnimation;
    struct TextureAnimationWithTransitions* CustomJogMovingAnimation;
    struct TextureAnimationWithTransitions* CustomRunMovingAnimation;
    struct TextureAnimationWithTransitions* m_originalWalkMovingAnimation;
    struct TextureAnimationWithTransitions* m_originalJogMovingAnimation;
    struct TextureAnimationWithTransitions* m_originalRunMovingAnimation;
    bool m_isPerforming;
    float MaxDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRunToTargetAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinRunToTargetAction__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinRunToTargetAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRunToTargetAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinRunToTargetAction__Fields_FWDDECL)
#include <Modloader/app/structs/SeinRunToTargetAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRunToTargetAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
