#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EItemPreviewType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EItemPreviewType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EItemPreviewType__Enum_DEFINED)
#define IL2CPP_STRUCT_EItemPreviewType__Enum_DEFINED
enum class EItemPreviewType__Enum : int32_t {
    k_EItemPreviewType_Image = 0x00000000,
    k_EItemPreviewType_YouTubeVideo = 0x00000001,
    k_EItemPreviewType_Sketchfab = 0x00000002,
    k_EItemPreviewType_EnvironmentMap_HorizontalCross = 0x00000003,
    k_EItemPreviewType_EnvironmentMap_LatLong = 0x00000004,
    k_EItemPreviewType_ReservedMax = 0x000000ff,
};
#endif
#if !defined(IL2CPP_STRUCT_EItemPreviewType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EItemPreviewType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EItemPreviewType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EItemPreviewType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EItemPreviewType__Enum_FWDDECL)
#include <Modloader/app/structs/EItemPreviewType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EItemPreviewType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
