#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoftJointLimitSpring_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoftJointLimitSpring_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftJointLimitSpring_DEFINED)
#define IL2CPP_STRUCT_SoftJointLimitSpring_DEFINED
struct SoftJointLimitSpring {
    float m_Spring;
    float m_Damper;
};
#endif
#if !defined(IL2CPP_STRUCT_SoftJointLimitSpring_FWDDECL)
#define IL2CPP_STRUCT_SoftJointLimitSpring_FWDDECL
#endif
#undef IL2CPP_STRUCT_SoftJointLimitSpring_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftJointLimitSpring_DEFINED) && !defined(IL2CPP_STRUCT_SoftJointLimitSpring_FWDDECL)
#include <Modloader/app/structs/SoftJointLimitSpring.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoftJointLimitSpring.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
