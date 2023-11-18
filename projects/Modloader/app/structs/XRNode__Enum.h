#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRNode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRNode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRNode__Enum_DEFINED)
#define IL2CPP_STRUCT_XRNode__Enum_DEFINED
enum class XRNode__Enum : int32_t {
    LeftEye = 0x00000000,
    RightEye = 0x00000001,
    CenterEye = 0x00000002,
    Head = 0x00000003,
    LeftHand = 0x00000004,
    RightHand = 0x00000005,
    GameController = 0x00000006,
    TrackingReference = 0x00000007,
    HardwareTracker = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_XRNode__Enum_FWDDECL)
#define IL2CPP_STRUCT_XRNode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XRNode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRNode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XRNode__Enum_FWDDECL)
#include <Modloader/app/structs/XRNode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRNode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
