#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointState__Fields_DEFINED)
#define IL2CPP_STRUCT_JointState__Fields_DEFINED
struct ConfigurableJoint;
struct ConfigurableJointMotion__Enum__Array;
struct __declspec(align(8)) JointState__Fields {
    struct ConfigurableJoint* joint;
    bool active;
    struct ConfigurableJointMotion__Enum__Array* JointMotions;
    bool SetAngularDrive;
    float AngularDriveSpring;
    float AngularDamper;
};
#endif
#if !defined(IL2CPP_STRUCT_JointState__Fields_FWDDECL)
#define IL2CPP_STRUCT_JointState__Fields_FWDDECL
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/ConfigurableJointMotion__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_JointState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JointState__Fields_FWDDECL)
#include <Modloader/app/structs/JointState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
