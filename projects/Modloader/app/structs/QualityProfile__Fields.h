#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualityProfile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualityProfile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityProfile__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_QualityProfile__Fields_DEFINED
struct QualityModeTweakAsset;
struct MoonRenderPipelineAsset;
struct UberGCLogic_GCLogicSettings;
struct QualityProfile__Fields {
    struct ScriptableObject__Fields _;
    struct QualityModeTweakAsset* tweakAsset;
    struct MoonRenderPipelineAsset* srpAsset;
    bool overrideGcSettings;
    struct UberGCLogic_GCLogicSettings* gclogicSettings;
    bool vSync;
    bool allowMSAA;
    bool allowHDR;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QualityProfile__Fields_FWDDECL)
#define IL2CPP_STRUCT_QualityProfile__Fields_FWDDECL
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#include <Modloader/app/structs/QualityModeTweakAsset.h>
#include <Modloader/app/structs/UberGCLogic_GCLogicSettings.h>
#endif
#undef IL2CPP_STRUCT_QualityProfile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityProfile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QualityProfile__Fields_FWDDECL)
#include <Modloader/app/structs/QualityProfile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualityProfile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
