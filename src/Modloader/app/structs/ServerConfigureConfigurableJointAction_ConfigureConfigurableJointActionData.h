#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_DEFINED)
#include <Modloader/app/structs/ConfigurableJointMotion__Enum.h>
#if defined(IL2CPP_STRUCT_ConfigurableJointMotion__Enum_DEFINED)
#define IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_DEFINED
struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData {
    int32_t ConfigurableJointID;
    int32_t ConfigurableJointGameObjID;
    int32_t ConnectedBodyID;
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
#if !defined(IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_FWDDECL)
#define IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_FWDDECL
#endif
#undef IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_DEFINED) && !defined(IL2CPP_STRUCT_ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData_FWDDECL)
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
