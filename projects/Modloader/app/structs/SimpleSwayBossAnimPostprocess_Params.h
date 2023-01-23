#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_DEFINED)
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_DEFINED
struct SimpleSwayBossAnimPostprocess_Params {
    float boneLen;
    float Gravity;
    float Straighten;
    float ScaleMin;
    float ScaleMax;
    struct Vector3 NoisePeriod;
    struct Vector3 NoiseAmp;
    struct Vector3 NoiseSpread;
    SimpleSwayBossAnimPostprocess_Params_NoiseTypes__Enum NoiseType;

    float Acceleration;
    float Damping;
    float DampingWater;
    float MaxDeviationPercentage;
    float MaxDeviationPivotFrac;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_FWDDECL)
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
