#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_DEFINED)
#include <Modloader/app/structs/SrpSampler.h>
#if defined(IL2CPP_STRUCT_SrpSampler_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_DEFINED
struct CustomSampler;
struct UberWaterReflectionView_Samplers__StaticFields {
    struct CustomSampler* onPostCull;
    struct SrpSampler renderAll;
    struct SrpSampler renderSingle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_FWDDECL
#include <Modloader/app/structs/CustomSampler.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionView_Samplers__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionView_Samplers__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionView_Samplers__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
