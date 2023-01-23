#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachJointSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachJointSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachJointSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AttachJointSettings__Fields_DEFINED
struct __declspec(align(8)) AttachJointSettings__Fields {
    bool lockRotation;
    bool lockPosition;
    bool lockHorizontalMovement;
    float hingeAngleLimit;
    float hingeSpring;
    float hingeDamper;
    float positionSpring;
    float positionDamper;
    float positionLimit;
    float massScale;
    bool useAngularDrive;
    float angularDriveSpring;
    float angularDriveDamper;
    bool UseHingeSpring;
    float HingeSpringSpring;
    float HingeSpringDamper;
};
#endif
#if !defined(IL2CPP_STRUCT_AttachJointSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttachJointSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AttachJointSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachJointSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttachJointSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AttachJointSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachJointSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
