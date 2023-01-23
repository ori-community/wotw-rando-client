#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTargetIdentifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTargetIdentifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTargetIdentifier_DEFINED)
#include <Modloader/app/structs/BuiltinRenderTextureType__Enum.h>
#include <Modloader/app/structs/CubemapFace__Enum.h>
#if defined(IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_DEFINED) && defined(IL2CPP_STRUCT_CubemapFace__Enum_DEFINED)
#define IL2CPP_STRUCT_RenderTargetIdentifier_DEFINED
struct RenderTargetIdentifier {
    BuiltinRenderTextureType__Enum m_Type;

    int32_t m_NameID;
    int32_t m_InstanceID;
    void* m_BufferPointer;
    int32_t m_MipLevel;
    CubemapFace__Enum m_CubeFace;

    int32_t m_DepthSlice;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderTargetIdentifier_FWDDECL)
#define IL2CPP_STRUCT_RenderTargetIdentifier_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderTargetIdentifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTargetIdentifier_DEFINED) && !defined(IL2CPP_STRUCT_RenderTargetIdentifier_FWDDECL)
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
