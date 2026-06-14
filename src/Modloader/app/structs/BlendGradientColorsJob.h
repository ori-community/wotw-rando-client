#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendGradientColorsJob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendGradientColorsJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendGradientColorsJob_DEFINED)
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Color_.h>
#if defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_Color__DEFINED)
#define IL2CPP_STRUCT_BlendGradientColorsJob_DEFINED
struct BlendGradientColorsJob {
    struct NativeArray_1_UnityEngine_Color_ ColA;
    struct NativeArray_1_UnityEngine_Color_ ColB;
    float CurveValue;
    struct NativeArray_1_UnityEngine_Color_ Result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendGradientColorsJob_FWDDECL)
#define IL2CPP_STRUCT_BlendGradientColorsJob_FWDDECL
#endif
#undef IL2CPP_STRUCT_BlendGradientColorsJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendGradientColorsJob_DEFINED) && !defined(IL2CPP_STRUCT_BlendGradientColorsJob_FWDDECL)
#include <Modloader/app/structs/BlendGradientColorsJob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendGradientColorsJob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
