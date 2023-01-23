#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendState_DEFINED)
#include <Modloader/app/structs/RenderTargetBlendState.h>
#if defined(IL2CPP_STRUCT_RenderTargetBlendState_DEFINED)
#define IL2CPP_STRUCT_BlendState_DEFINED
struct BlendState {
    struct RenderTargetBlendState m_BlendState0;
    struct RenderTargetBlendState m_BlendState1;
    struct RenderTargetBlendState m_BlendState2;
    struct RenderTargetBlendState m_BlendState3;
    struct RenderTargetBlendState m_BlendState4;
    struct RenderTargetBlendState m_BlendState5;
    struct RenderTargetBlendState m_BlendState6;
    struct RenderTargetBlendState m_BlendState7;
    uint8_t m_SeparateMRTBlendStates;
    uint8_t m_AlphaToMask;
    int16_t m_Padding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendState_FWDDECL)
#define IL2CPP_STRUCT_BlendState_FWDDECL
#endif
#undef IL2CPP_STRUCT_BlendState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendState_DEFINED) && !defined(IL2CPP_STRUCT_BlendState_FWDDECL)
#include <Modloader/app/structs/BlendState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
