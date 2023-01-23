#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RasterState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RasterState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RasterState_DEFINED)
#include <Modloader/app/structs/CullMode__Enum.h>
#if defined(IL2CPP_STRUCT_CullMode__Enum_DEFINED)
#define IL2CPP_STRUCT_RasterState_DEFINED
struct RasterState {
    CullMode__Enum m_CullingMode;

    int32_t m_OffsetUnits;
    float m_OffsetFactor;
    uint8_t m_DepthClip;
    uint8_t m_Padding1;
    uint8_t m_Padding2;
    uint8_t m_Padding3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RasterState_FWDDECL)
#define IL2CPP_STRUCT_RasterState_FWDDECL
#endif
#undef IL2CPP_STRUCT_RasterState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RasterState_DEFINED) && !defined(IL2CPP_STRUCT_RasterState_FWDDECL)
#include <Modloader/app/structs/RasterState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RasterState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
