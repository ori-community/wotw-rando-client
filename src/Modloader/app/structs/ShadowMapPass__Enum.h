#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShadowMapPass__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShadowMapPass__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShadowMapPass__Enum_DEFINED)
#define IL2CPP_STRUCT_ShadowMapPass__Enum_DEFINED
enum class ShadowMapPass__Enum : int32_t {
    PointlightPositiveX = 0x00000001,
    PointlightNegativeX = 0x00000002,
    PointlightPositiveY = 0x00000004,
    PointlightNegativeY = 0x00000008,
    PointlightPositiveZ = 0x00000010,
    PointlightNegativeZ = 0x00000020,
    DirectionalCascade0 = 0x00000040,
    DirectionalCascade1 = 0x00000080,
    DirectionalCascade2 = 0x00000100,
    DirectionalCascade3 = 0x00000200,
    Spotlight = 0x00000400,
    Pointlight = 0x0000003f,
    Directional = 0x000003c0,
    All = 0x000007ff,
};
#endif
#if !defined(IL2CPP_STRUCT_ShadowMapPass__Enum_FWDDECL)
#define IL2CPP_STRUCT_ShadowMapPass__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShadowMapPass__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShadowMapPass__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ShadowMapPass__Enum_FWDDECL)
#include <Modloader/app/structs/ShadowMapPass__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShadowMapPass__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
