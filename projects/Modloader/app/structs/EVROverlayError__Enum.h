#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVROverlayError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVROverlayError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVROverlayError__Enum_DEFINED)
#define IL2CPP_STRUCT_EVROverlayError__Enum_DEFINED
enum class EVROverlayError__Enum : int32_t {
    None = 0x00000000,
    UnknownOverlay = 0x0000000a,
    InvalidHandle = 0x0000000b,
    PermissionDenied = 0x0000000c,
    OverlayLimitExceeded = 0x0000000d,
    WrongVisibilityType = 0x0000000e,
    KeyTooLong = 0x0000000f,
    NameTooLong = 0x00000010,
    KeyInUse = 0x00000011,
    WrongTransformType = 0x00000012,
    InvalidTrackedDevice = 0x00000013,
    InvalidParameter = 0x00000014,
    ThumbnailCantBeDestroyed = 0x00000015,
    ArrayTooSmall = 0x00000016,
    RequestFailed = 0x00000017,
    InvalidTexture = 0x00000018,
    UnableToLoadFile = 0x00000019,
    KeyboardAlreadyInUse = 0x0000001a,
    NoNeighbor = 0x0000001b,
    TooManyMaskPrimitives = 0x0000001d,
    BadMaskPrimitive = 0x0000001e,
};
#endif
#if !defined(IL2CPP_STRUCT_EVROverlayError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVROverlayError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVROverlayError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVROverlayError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVROverlayError__Enum_FWDDECL)
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
