#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterThirdPerson__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterThirdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson__Fields_DEFINED)
#include <Modloader/app/structs/CharacterBase__Fields.h>
#include <Modloader/app/structs/CharacterThirdPerson_AnimState.h>
#include <Modloader/app/structs/CharacterThirdPerson_MoveMode__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_CharacterThirdPerson_MoveMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_CharacterThirdPerson_AnimState_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_CharacterThirdPerson__Fields_DEFINED
struct CharacterAnimationBase;
struct UserControlThirdPerson;
struct CameraController;
struct Animator;
struct CharacterThirdPerson__Fields {
    struct CharacterBase__Fields _;
    struct CharacterAnimationBase* characterAnimation;
    struct UserControlThirdPerson* userControl;
    struct CameraController* cam;
    CharacterThirdPerson_MoveMode__Enum moveMode;

    bool smoothPhysics;
    float smoothAccelerationTime;
    float linearAccelerationSpeed;
    float platformFriction;
    float groundStickyEffect;
    float maxVerticalVelocityOnGround;
    float velocityToGroundTangentWeight;
    bool lookInCameraDirection;
    float turnSpeed;
    float stationaryTurnSpeedMlp;
    float airSpeed;
    float airControl;
    float jumpPower;
    float jumpRepeatDelayTime;
    struct LayerMask wallRunLayers;
    float wallRunMaxLength;
    float wallRunMinMoveMag;
    float wallRunMinVelocityY;
    float wallRunRotationSpeed;
    float wallRunMaxRotationAngle;
    float wallRunWeightSpeed;
    float crouchCapsuleScaleMlp;
    bool _onGround_k__BackingField;
    struct CharacterThirdPerson_AnimState animState;
    struct Vector3 moveDirection;
    struct Animator* animator;
    struct Vector3 normal;
    struct Vector3 platformVelocity;
    struct Vector3 platformAngularVelocity;
    struct RaycastHit hit;
    float jumpLeg;
    float jumpEndTime;
    float forwardMlp;
    float groundDistance;
    float lastAirTime;
    float stickyForce;
    struct Vector3 wallNormal;
    struct Vector3 moveDirectionVelocity;
    float wallRunWeight;
    float lastWallRunWeight;
    struct Vector3 fixedDeltaPosition;
    struct Quaternion fixedDeltaRotation;
    bool fixedFrame;
    float wallRunEndTime;
    struct Vector3 gravity;
    struct Vector3 verticalVelocity;
    float velocityY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterThirdPerson__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CameraController.h>
#include <Modloader/app/structs/CharacterAnimationBase.h>
#include <Modloader/app/structs/UserControlThirdPerson.h>
#endif
#undef IL2CPP_STRUCT_CharacterThirdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterThirdPerson__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterThirdPerson__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterThirdPerson__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
