#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VROverlayFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VROverlayFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VROverlayFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_VROverlayFlags__Enum_DEFINED
enum class VROverlayFlags__Enum : int32_t {
    None = 0x00000000,
    Curved = 0x00000001,
    RGSS4X = 0x00000002,
    NoDashboardTab = 0x00000003,
    AcceptsGamepadEvents = 0x00000004,
    ShowGamepadFocus = 0x00000005,
    SendVRScrollEvents = 0x00000006,
    SendVRTouchpadEvents = 0x00000007,
    ShowTouchPadScrollWheel = 0x00000008,
    TransferOwnershipToInternalProcess = 0x00000009,
    SideBySide_Parallel = 0x0000000a,
    SideBySide_Crossed = 0x0000000b,
    Panorama = 0x0000000c,
    StereoPanorama = 0x0000000d,
    SortWithNonSceneOverlays = 0x0000000e,
    VisibleInDashboard = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_VROverlayFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_VROverlayFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_VROverlayFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VROverlayFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_VROverlayFlags__Enum_FWDDECL)
#include <Modloader/app/structs/VROverlayFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VROverlayFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
