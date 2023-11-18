#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_DEFINED
struct VectorAnimationParameter;
struct GameObject;
struct VectorAnimationParameterAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct VectorAnimationParameter* Parameter;
    struct Vector3 ParameterValue;
    struct GameObject* AnimatedObject;
    float EffectDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VectorAnimationParameterAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/VectorAnimationParameterAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VectorAnimationParameterAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
