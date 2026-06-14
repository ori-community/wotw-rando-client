#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_BlendMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_BlendMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_BlendMode__Enum_DEFINED)
#define IL2CPP_STRUCT_P3D_BlendMode__Enum_DEFINED
enum class P3D_BlendMode__Enum : int32_t {
    AlphaBlend = 0x00000000,
    AlphaBlendRgb = 0x00000001,
    AlphaErase = 0x00000002,
    AdditiveBlend = 0x00000003,
    SubtractiveBlend = 0x00000004,
    NormalBlend = 0x00000005,
    Replace = 0x00000006,
    LightPaintAdditive = 0x00000007,
    LightPaintSubtractive = 0x00000008,
    LightPaintErase = 0x00000009,
    LightPaintBlur = 0x0000000a,
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_BlendMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_P3D_BlendMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_P3D_BlendMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_BlendMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_P3D_BlendMode__Enum_FWDDECL)
#include <Modloader/app/structs/P3D_BlendMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_BlendMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
