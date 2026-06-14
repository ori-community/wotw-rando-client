#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderContext__Fields_DEFINED)
#include <Modloader/app/structs/ClearFlagMode__Enum.h>
#include <Modloader/app/structs/ClearPolicy__Enum.h>
#include <Modloader/app/structs/ScriptableRenderContext.h>
#if defined(IL2CPP_STRUCT_ClearPolicy__Enum_DEFINED) && defined(IL2CPP_STRUCT_ClearFlagMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_ScriptableRenderContext_DEFINED)
#define IL2CPP_STRUCT_MoonRenderContext__Fields_DEFINED
struct CommandBuffer;
struct Stack_1_UnityEngine_Rendering_CommandBuffer_;
struct __declspec(align(8)) MoonRenderContext__Fields {
    ClearPolicy__Enum clearPolicy;

    ClearFlagMode__Enum clearFast;

    ClearFlagMode__Enum clearStencil;

    struct ScriptableRenderContext ctx;
    struct CommandBuffer* currentCommandBuffer;
    struct Stack_1_UnityEngine_Rendering_CommandBuffer_* availableCommandBuffers;
    struct Stack_1_UnityEngine_Rendering_CommandBuffer_* usedCommandBuffers;
    bool profileFlushAndSubmit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderContext__Fields_FWDDECL
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_Rendering_CommandBuffer_.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderContext__Fields_FWDDECL)
#include <Modloader/app/structs/MoonRenderContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
