#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_INITIALIZING
#if !defined(IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_DEFINED)
#define IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_DEFINED
struct RenderTexture;
struct RenderBuffer__Array;
struct Motion_FrameBlendingFilter_Frame {
    struct RenderTexture* lumaTexture;
    struct RenderTexture* chromaTexture;
    float time;
    struct RenderBuffer__Array* _mrt;
};
#endif
#if !defined(IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_FWDDECL)
#define IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_FWDDECL
#include <Modloader/app/structs/RenderBuffer__Array.h>
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_INITIALIZING
#if !defined(IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_DEFINED) && !defined(IL2CPP_STRUCT_Motion_FrameBlendingFilter_Frame_FWDDECL)
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
