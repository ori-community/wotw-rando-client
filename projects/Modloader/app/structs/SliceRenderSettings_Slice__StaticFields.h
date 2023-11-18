#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_DEFINED
struct Single__Array;
struct String__Array;
struct SliceRenderSettings_Slice__StaticFields {
    struct Single__Array* pixelRadiusPerKernelPoint;
    struct Single__Array* pixelRadiusPerKernelBilinear;
    struct String__Array* blurKernelNames;
};
#endif
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_FWDDECL
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SliceRenderSettings_Slice__StaticFields_FWDDECL)
#include <Modloader/app/structs/SliceRenderSettings_Slice__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliceRenderSettings_Slice__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
