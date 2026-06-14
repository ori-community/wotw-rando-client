#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_DEFINED
struct List_1_UnityEngine_Renderer_;
struct GlobalTurbulenceMapManager__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Renderer_* GlobalTurbulenceMapRenderers;
    float ActiveRenderer;
    float GlobalTurbulenceMapPower;
    float GlobalTurbulenceZExtend;
    float RotationTubulenceSpeedModifier;
    float RotationTubulenceScaleModifier;
    float RotationTubulenceOffsetModifier;
    float RotationTubulenceBiasModifier;
    float ScaleTubulenceSpeedModifier;
    float ScaleTubulenceScaleModifier;
    float ScaleTubulenceOffsetModifier;
    float ScaleTubulenceBiasModifier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#endif
#undef IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_FWDDECL)
#include <Modloader/app/structs/GlobalTurbulenceMapManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalTurbulenceMapManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
