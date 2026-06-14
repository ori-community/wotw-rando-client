#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterJoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterJoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterJoint__Fields_DEFINED)
#include <Modloader/app/structs/JointDrive.h>
#include <Modloader/app/structs/Joint__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Joint__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_JointDrive_DEFINED)
#define IL2CPP_STRUCT_CharacterJoint__Fields_DEFINED
struct CharacterJoint__Fields {
    struct Joint__Fields _;
    struct Quaternion targetRotation;
    struct Vector3 targetAngularVelocity;
    struct JointDrive rotationDrive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterJoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterJoint__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CharacterJoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterJoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterJoint__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterJoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterJoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
