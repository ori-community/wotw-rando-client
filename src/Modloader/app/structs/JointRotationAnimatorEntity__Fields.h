#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/EulerXYZRotationAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EulerXYZRotationAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_DEFINED
struct ConfigurableJoint;
struct JointRotationAnimatorEntity__Fields {
    struct EulerXYZRotationAnimatorEntity__Fields _;
    struct ConfigurableJoint* m_joint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/ConfigurableJoint.h>
#endif
#undef IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JointRotationAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/JointRotationAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointRotationAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
