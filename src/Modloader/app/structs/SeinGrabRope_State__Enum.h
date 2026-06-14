#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabRope_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabRope_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabRope_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinGrabRope_State__Enum_DEFINED
enum class SeinGrabRope_State__Enum : int32_t {
    Normal = 0x00000000,
    Vertical = 0x00000001,
    Horizontal = 0x00000002,
    Swing = 0x00000003,
    DashToVertical = 0x00000004,
    SwitchingSideVertical = 0x00000005,
    JumpingUpPole = 0x00000006,
    Wheel = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabRope_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabRope_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinGrabRope_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabRope_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabRope_State__Enum_FWDDECL)
#include <Modloader/app/structs/SeinGrabRope_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabRope_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
