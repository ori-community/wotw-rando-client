#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationLimitHinge__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationLimitHinge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitHinge__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RotationLimit__Fields.h>
#if defined(IL2CPP_STRUCT_RotationLimit__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_RotationLimitHinge__Fields_DEFINED
struct RotationLimitHinge__Fields {
    struct RotationLimit__Fields _;
    bool useLimits;
    float min;
    float max;
    float zeroAxisDisplayOffset;
    struct Quaternion lastRotation;
    float lastAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationLimitHinge__Fields_FWDDECL)
#define IL2CPP_STRUCT_RotationLimitHinge__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RotationLimitHinge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitHinge__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RotationLimitHinge__Fields_FWDDECL)
#include <Modloader/app/structs/RotationLimitHinge__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationLimitHinge__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
