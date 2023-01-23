#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Int2.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_Int2_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_DEFINED
struct __declspec(align(8)) MoonRenderPipelineDebug_Slice__Fields {
    bool clipped;
    float zWorldNear;
    float zWorldFar;
    float zFar;
    float zNear;
    struct Bounds cullBounds;
    float blurAmount;
    float downsampling;
    struct Int2 rtSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineDebug_Slice__Fields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineDebug_Slice__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineDebug_Slice__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
