#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BodyTilt__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BodyTilt__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BodyTilt__Fields_DEFINED)
#include <Modloader/app/structs/OffsetModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_OffsetModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BodyTilt__Fields_DEFINED
struct OffsetPose;
struct BodyTilt__Fields {
    struct OffsetModifier__Fields _;
    float tiltSpeed;
    float tiltSensitivity;
    struct OffsetPose* poseLeft;
    struct OffsetPose* poseRight;
    float tiltAngle;
    struct Vector3 lastForward;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BodyTilt__Fields_FWDDECL)
#define IL2CPP_STRUCT_BodyTilt__Fields_FWDDECL
#include <Modloader/app/structs/OffsetPose.h>
#endif
#undef IL2CPP_STRUCT_BodyTilt__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BodyTilt__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BodyTilt__Fields_FWDDECL)
#include <Modloader/app/structs/BodyTilt__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BodyTilt__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
