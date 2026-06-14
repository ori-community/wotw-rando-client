#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_DEFINED)
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#if defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_DEFINED
struct Material;
struct Motion_FrameBlendingFilter_Frame__Array;
struct __declspec(align(8)) Motion_FrameBlendingFilter__Fields {
    bool _useCompression;
    RenderTextureFormat__Enum _rawTextureFormat;

    struct Material* _material;
    struct Motion_FrameBlendingFilter_Frame__Array* _frameList;
    int32_t _lastFrameCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_FWDDECL)
#define IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame__Array.h>
#endif
#undef IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Motion_FrameBlendingFilter__Fields_FWDDECL)
#include <Modloader/app/structs/Motion_FrameBlendingFilter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Motion_FrameBlendingFilter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
