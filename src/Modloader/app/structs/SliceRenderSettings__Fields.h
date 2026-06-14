#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliceRenderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliceRenderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceRenderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SliceRenderSettings__Fields_DEFINED
struct SliceRenderSettings_Slice__Array;
struct __declspec(align(8)) SliceRenderSettings__Fields {
    struct SliceRenderSettings_Slice__Array* slices;
    bool AllowDofOnAllSlices;
    int32_t _NoDofSliceA_k__BackingField;
    int32_t _NoDofSliceB_k__BackingField;
    bool m_noDofSliceCalculated;
};
#endif
#if !defined(IL2CPP_STRUCT_SliceRenderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SliceRenderSettings__Fields_FWDDECL
#include <Modloader/app/structs/SliceRenderSettings_Slice__Array.h>
#endif
#undef IL2CPP_STRUCT_SliceRenderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceRenderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SliceRenderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SliceRenderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliceRenderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
