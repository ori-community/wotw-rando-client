#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Recoil__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Recoil__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recoil__Fields_DEFINED)
#include <Modloader/app/structs/OffsetModifier__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Recoil_Handedness__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_OffsetModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Recoil_Handedness__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_Recoil__Fields_DEFINED
struct AimIK;
struct AnimationCurve;
struct Recoil_RecoilOffset__Array;
struct Recoil__Fields {
    struct OffsetModifier__Fields _;
    struct AimIK* aimIK;
    Recoil_Handedness__Enum handedness;

    bool twoHanded;
    struct AnimationCurve* recoilWeight;
    float magnitudeRandom;
    struct Vector3 rotationRandom;
    struct Vector3 handRotationOffset;
    float blendTime;
    struct Recoil_RecoilOffset__Array* offsets;
    struct Quaternion rotationOffset;
    float magnitudeMlp;
    float endTime;
    struct Quaternion handRotation;
    struct Quaternion secondaryHandRelativeRotation;
    struct Quaternion randomRotation;
    float length;
    bool initiated;
    float blendWeight;
    float w;
    struct Quaternion primaryHandRotation;
    bool handRotationsSet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Recoil__Fields_FWDDECL)
#define IL2CPP_STRUCT_Recoil__Fields_FWDDECL
#include <Modloader/app/structs/AimIK.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Recoil_RecoilOffset__Array.h>
#endif
#undef IL2CPP_STRUCT_Recoil__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recoil__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Recoil__Fields_FWDDECL)
#include <Modloader/app/structs/Recoil__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Recoil__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
