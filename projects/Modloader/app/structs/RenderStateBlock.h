#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderStateBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderStateBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderStateBlock_DEFINED)
#include <Modloader/app/structs/BlendState.h>
#include <Modloader/app/structs/DepthState.h>
#include <Modloader/app/structs/RasterState.h>
#include <Modloader/app/structs/RenderStateMask__Enum.h>
#include <Modloader/app/structs/StencilState.h>
#if defined(IL2CPP_STRUCT_BlendState_DEFINED) && defined(IL2CPP_STRUCT_RasterState_DEFINED) && defined(IL2CPP_STRUCT_DepthState_DEFINED) && defined(IL2CPP_STRUCT_StencilState_DEFINED) && defined(IL2CPP_STRUCT_RenderStateMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RenderStateBlock_DEFINED
struct RenderStateBlock {
    struct BlendState m_BlendState;
    struct RasterState m_RasterState;
    struct DepthState m_DepthState;
    struct StencilState m_StencilState;
    int32_t m_StencilReference;
    RenderStateMask__Enum m_Mask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderStateBlock_FWDDECL)
#define IL2CPP_STRUCT_RenderStateBlock_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderStateBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderStateBlock_DEFINED) && !defined(IL2CPP_STRUCT_RenderStateBlock_FWDDECL)
#include <Modloader/app/structs/RenderStateBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderStateBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
