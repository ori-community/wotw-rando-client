#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveToTargetAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveToTargetAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveToTargetAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/MoveToTargetAnimator_MoveMode__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoveToTargetAnimator_MoveMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MoveToTargetAnimator__Fields_DEFINED
struct Transform;
struct AnimationCurve;
struct MoveToTargetAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct Transform* MovingTransform;
    struct Transform* TargetTransform;
    MoveToTargetAnimator_MoveMode__Enum Move;

    struct AnimationCurve* MoveWeight;
    struct Vector3 m_originalPosition;
    struct Transform* m_effectiveTranform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveToTargetAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoveToTargetAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MoveToTargetAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveToTargetAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoveToTargetAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/MoveToTargetAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveToTargetAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
