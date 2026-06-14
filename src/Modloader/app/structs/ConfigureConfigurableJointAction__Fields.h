#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/ConfigurableJointMotion__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_ConfigurableJointMotion__Enum_DEFINED)
#define IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_DEFINED
struct ConfigurableJoint;
struct GameObject;
struct Rigidbody;
struct ConfigureConfigurableJointAction__Fields {
    struct ActionMethod__Fields _;
    struct ConfigurableJoint* ConfigurableJoint;
    struct GameObject* ConfigurableJointGameObject;
    struct Rigidbody* ConnectedBody;
    ConfigurableJointMotion__Enum XMotion;

    ConfigurableJointMotion__Enum YMotion;

    ConfigurableJointMotion__Enum ZMotion;

    ConfigurableJointMotion__Enum AngularXMotion;

    ConfigurableJointMotion__Enum AngularYMotion;

    ConfigurableJointMotion__Enum AngularZMotion;

    float LinearLimitSprintSpring;
    float LinearLimitSprintDamper;
    float LinearLimitLimit;
    float LinearLimitBounciness;
    float LinearLimitContactDistance;
    float ZRotationSpringStiffness;
    float ZRotationSpringDamping;
    bool ShouldGenerateJoint;
    bool SetConnectedBody;
    bool SetXMotion;
    bool SetYMotion;
    bool SetZMotion;
    bool SetAngularXMotion;
    bool SetAngularYMotion;
    bool SetAngularZMotion;
    bool SetLinearLimitSpring;
    bool SetLinearLimit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_FWDDECL
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConfigureConfigurableJointAction__Fields_FWDDECL)
#include <Modloader/app/structs/ConfigureConfigurableJointAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigureConfigurableJointAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
