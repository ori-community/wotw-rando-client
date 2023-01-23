#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_DEFINED)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_DEFINED
struct SimpleSwayAnimPostprocess_Params {
    float Gravity;
    float FracPow;
    float Acceleration;
    float Damping;
    float DampingWater;
    float MaxDeviationPercentage;
    float MaxDeviationPivotFrac;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_FWDDECL)
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Params.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Params.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
