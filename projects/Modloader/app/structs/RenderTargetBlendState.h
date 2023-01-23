#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTargetBlendState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTargetBlendState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTargetBlendState_DEFINED)
#define IL2CPP_STRUCT_RenderTargetBlendState_DEFINED
struct RenderTargetBlendState {
    uint8_t m_WriteMask;
    uint8_t m_SourceColorBlendMode;
    uint8_t m_DestinationColorBlendMode;
    uint8_t m_SourceAlphaBlendMode;
    uint8_t m_DestinationAlphaBlendMode;
    uint8_t m_ColorBlendOperation;
    uint8_t m_AlphaBlendOperation;
    uint8_t m_Padding;
};
#endif
#if !defined(IL2CPP_STRUCT_RenderTargetBlendState_FWDDECL)
#define IL2CPP_STRUCT_RenderTargetBlendState_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderTargetBlendState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTargetBlendState_DEFINED) && !defined(IL2CPP_STRUCT_RenderTargetBlendState_FWDDECL)
#include <Modloader/app/structs/RenderTargetBlendState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTargetBlendState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
