#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/IKLimb__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKLimb__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_DEFINED
struct Transform;
struct VelocityBezierSplineComponent;
struct WeaponAnimationPostprocess__Fields {
    struct IKLimb__Fields _;
    struct Transform* Weapon;
    struct Transform* tipTransform;
    struct Transform* handleTransform;
    struct Vector3 tipReferencePoint;
    struct Vector3 handleReferencePoint;
    struct VelocityBezierSplineComponent* tipSpline;
    struct VelocityBezierSplineComponent* handleSpline;
    bool autoRaycast;
    struct Vector3 targetTipPosition;
    struct Vector3 targetHandlePosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#endif
#undef IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponAnimationPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponAnimationPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
