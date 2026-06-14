#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_DEFINED
struct SeinCharacter;
struct MoonAnimator;
struct CharacterSpriteMirror;
struct Transform;
struct FloatAnimationParameter;
struct OriAnimationParametersHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinCharacter* Ori;
    struct MoonAnimator* Animator;
    struct CharacterSpriteMirror* SpriteMirror;
    struct Transform* RigTransform;
    struct FloatAnimationParameter* GroundSlopeParameter;
    struct FloatAnimationParameter* MovementSpeedParameter;
    struct FloatAnimationParameter* AimAngle;
    struct FloatAnimationParameter* GroundSlopeUpParameter;
    struct FloatAnimationParameter* GroundSlopeDownParameter;
    struct FloatAnimationParameter* WallSlopeParameter;
    struct FloatAnimationParameter* WallSlopeDownParameter;
    struct FloatAnimationParameter* WallSlopeUpParameter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_FWDDECL
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriAnimationParametersHandler__Fields_FWDDECL)
#include <Modloader/app/structs/OriAnimationParametersHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriAnimationParametersHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
