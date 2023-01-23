#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostProcessRenderContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostProcessRenderContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostProcessRenderContext__Fields_DEFINED)
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTextureDescriptor.h>
#if defined(IL2CPP_STRUCT_RenderTargetIdentifier_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureDescriptor_DEFINED)
#define IL2CPP_STRUCT_PostProcessRenderContext__Fields_DEFINED
struct Object;
struct CommandBuffer;
struct __declspec(align(8)) PostProcessRenderContext__Fields {
    struct Object* view;
    struct CommandBuffer* cmd;
    struct RenderTargetIdentifier source;
    struct RenderTargetIdentifier destination;
    struct RenderTextureDescriptor descSource;
    struct RenderTextureDescriptor descDest;
    float currentDRSScale;
    float currentDRSScaleY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PostProcessRenderContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_PostProcessRenderContext__Fields_FWDDECL
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_PostProcessRenderContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostProcessRenderContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PostProcessRenderContext__Fields_FWDDECL)
#include <Modloader/app/structs/PostProcessRenderContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostProcessRenderContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
