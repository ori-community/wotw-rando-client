#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSAiming__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSAiming__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSAiming__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_FPSAiming__Fields_DEFINED
struct Transform;
struct FullBodyBipedIK;
struct AimIK;
struct CameraControllerFPS;
struct Recoil;
struct FPSAiming__Fields {
    struct MonoBehaviour__Fields _;
    float aimWeight;
    float sightWeight;
    float maxAngle;
    bool animatePhysics;
    struct Transform* gun;
    struct Transform* gunTarget;
    struct FullBodyBipedIK* ik;
    struct AimIK* gunAim;
    struct CameraControllerFPS* cam;
    struct Vector3 gunTargetDefaultLocalPosition;
    struct Quaternion gunTargetDefaultLocalRotation;
    struct Vector3 camDefaultLocalPosition;
    struct Vector3 camRelativeToGunTarget;
    bool updateFrame;
    struct Recoil* recoil;
    float cameraRecoilWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSAiming__Fields_FWDDECL)
#define IL2CPP_STRUCT_FPSAiming__Fields_FWDDECL
#include <Modloader/app/structs/AimIK.h>
#include <Modloader/app/structs/CameraControllerFPS.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/Recoil.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FPSAiming__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSAiming__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FPSAiming__Fields_FWDDECL)
#include <Modloader/app/structs/FPSAiming__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSAiming__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
