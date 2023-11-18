#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRCompositorError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRCompositorError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRCompositorError__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRCompositorError__Enum_DEFINED
enum class EVRCompositorError__Enum : int32_t {
    None = 0x00000000,
    RequestFailed = 0x00000001,
    IncompatibleVersion = 0x00000064,
    DoNotHaveFocus = 0x00000065,
    InvalidTexture = 0x00000066,
    IsNotSceneApplication = 0x00000067,
    TextureIsOnWrongDevice = 0x00000068,
    TextureUsesUnsupportedFormat = 0x00000069,
    SharedTexturesNotSupported = 0x0000006a,
    IndexOutOfRange = 0x0000006b,
    AlreadySubmitted = 0x0000006c,
    InvalidBounds = 0x0000006d,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRCompositorError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRCompositorError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRCompositorError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRCompositorError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRCompositorError__Enum_FWDDECL)
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
