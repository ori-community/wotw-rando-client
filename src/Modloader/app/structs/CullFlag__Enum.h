#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullFlag__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullFlag__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullFlag__Enum_DEFINED)
#define IL2CPP_STRUCT_CullFlag__Enum_DEFINED
enum class CullFlag__Enum : int32_t {
    None = 0x00000000,
    ForceEvenIfCameraIsNotActive = 0x00000001,
    OcclusionCull = 0x00000002,
    NeedsLighting = 0x00000004,
    NeedsReflectionProbes = 0x00000008,
    Stereo = 0x00000010,
    DisablePerObjectCulling = 0x00000020,
    ShadowCasters = 0x00000040,
};
#endif
#if !defined(IL2CPP_STRUCT_CullFlag__Enum_FWDDECL)
#define IL2CPP_STRUCT_CullFlag__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CullFlag__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullFlag__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CullFlag__Enum_FWDDECL)
#include <Modloader/app/structs/CullFlag__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullFlag__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
