#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_DEFINED)
#include <Modloader/app/structs/ConfigurableJointMotion__Enum.h>
#include <Modloader/app/structs/JointProjectionMode__Enum.h>
#include <Modloader/app/structs/RotationDriveMode__Enum.h>
#if defined(IL2CPP_STRUCT_ConfigurableJointMotion__Enum_DEFINED) && defined(IL2CPP_STRUCT_RotationDriveMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_JointProjectionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_DEFINED
struct Vector3Ser;
struct Vector2Ser;
struct Vector4Ser;
struct ServerConfigurableJoint_ConfigurableJointData {
    int32_t ConnectedBodyID;
    struct Vector3Ser* Anchor;
    struct Vector3Ser* Axis;
    bool AutoConfigure;
    struct Vector3Ser* ConnectedAnchor;
    struct Vector3Ser* SecondaryAxis;
    ConfigurableJointMotion__Enum Xmotion;

    ConfigurableJointMotion__Enum Ymotion;

    ConfigurableJointMotion__Enum Zmotion;

    ConfigurableJointMotion__Enum AngularXMotion;

    ConfigurableJointMotion__Enum AngularYMotion;

    ConfigurableJointMotion__Enum AngularZMotion;

    struct Vector2Ser* LinearLimitSpring;
    struct Vector3Ser* LinearLimit;
    struct Vector2Ser* AngularXLimitSpring;
    struct Vector3Ser* LowAngularXLimit;
    struct Vector3Ser* HighAngularXLimit;
    struct Vector2Ser* AngularYZLimitSpring;
    struct Vector3Ser* AngularYLimit;
    struct Vector3Ser* AngularZLimit;
    struct Vector3Ser* TargetPosition;
    struct Vector3Ser* TargetVelocity;
    struct Vector3Ser* XDrive;
    struct Vector3Ser* YDrive;
    struct Vector3Ser* ZDrive;
    struct Vector4Ser* TargetRotation;
    struct Vector3Ser* TargetAngularVelocity;
    RotationDriveMode__Enum RotationDrvMode;

    struct Vector3Ser* AngularXDrive;
    struct Vector3Ser* AngularYZDrive;
    struct Vector3Ser* SlerpDrive;
    JointProjectionMode__Enum ProjectionMode;

    float ProjectionDistance;
    float ProjectionAngle;
    bool ConfigureInWorldSpace;
    bool SwapBodies;
    float BreakForce;
    float BreakTorque;
    bool EnableCollision;
    bool EnablePreprocessing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_FWDDECL)
#define IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_FWDDECL
#include <Modloader/app/structs/Vector2Ser.h>
#include <Modloader/app/structs/Vector3Ser.h>
#include <Modloader/app/structs/Vector4Ser.h>
#endif
#undef IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_DEFINED) && !defined(IL2CPP_STRUCT_ServerConfigurableJoint_ConfigurableJointData_FWDDECL)
#include <Modloader/app/structs/ServerConfigurableJoint_ConfigurableJointData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerConfigurableJoint_ConfigurableJointData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
