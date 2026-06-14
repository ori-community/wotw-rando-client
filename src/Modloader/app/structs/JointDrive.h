#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointDrive_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointDrive_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointDrive_DEFINED)
#define IL2CPP_STRUCT_JointDrive_DEFINED
struct JointDrive {
    float m_PositionSpring;
    float m_PositionDamper;
    float m_MaximumForce;
};
#endif
#if !defined(IL2CPP_STRUCT_JointDrive_FWDDECL)
#define IL2CPP_STRUCT_JointDrive_FWDDECL
#endif
#undef IL2CPP_STRUCT_JointDrive_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointDrive_DEFINED) && !defined(IL2CPP_STRUCT_JointDrive_FWDDECL)
#include <Modloader/app/structs/JointDrive.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointDrive.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
