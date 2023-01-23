#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliceRenderSettings_Slice_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliceRenderSettings_Slice_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_Slice_DEFINED)
#define IL2CPP_STRUCT_SliceRenderSettings_Slice_DEFINED
struct SliceRenderSettings_Slice {
    float downnsampleRatio;
    float blurAmount;
};
#endif
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_Slice_FWDDECL)
#define IL2CPP_STRUCT_SliceRenderSettings_Slice_FWDDECL
#endif
#undef IL2CPP_STRUCT_SliceRenderSettings_Slice_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_Slice_DEFINED) && !defined(IL2CPP_STRUCT_SliceRenderSettings_Slice_FWDDECL)
#include <Modloader/app/structs/SliceRenderSettings_Slice.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliceRenderSettings_Slice.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
