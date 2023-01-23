#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaEntity_LianaParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaEntity_LianaParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaEntity_LianaParameters_DEFINED)
#define IL2CPP_STRUCT_LianaEntity_LianaParameters_DEFINED
struct LianaEntity_LianaParameters {
    float ThawedTongueLength;
    float FrozenTongueLength;
    float ReelingSpeed;
    float ReelingCaughtSpeed;
    float UnreelingSpeed;
    float TongueReleaseWait;
    float SpitForce;
    float RopeGrabReleaseImpulse;
    float FrozenMouthOpenAmount;
};
#endif
#if !defined(IL2CPP_STRUCT_LianaEntity_LianaParameters_FWDDECL)
#define IL2CPP_STRUCT_LianaEntity_LianaParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_LianaEntity_LianaParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaEntity_LianaParameters_DEFINED) && !defined(IL2CPP_STRUCT_LianaEntity_LianaParameters_FWDDECL)
#include <Modloader/app/structs/LianaEntity_LianaParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaEntity_LianaParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
