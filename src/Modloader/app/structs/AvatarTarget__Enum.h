#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AvatarTarget__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AvatarTarget__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AvatarTarget__Enum_DEFINED)
#define IL2CPP_STRUCT_AvatarTarget__Enum_DEFINED
enum class AvatarTarget__Enum : int32_t {
    Root = 0x00000000,
    Body = 0x00000001,
    LeftFoot = 0x00000002,
    RightFoot = 0x00000003,
    LeftHand = 0x00000004,
    RightHand = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_AvatarTarget__Enum_FWDDECL)
#define IL2CPP_STRUCT_AvatarTarget__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AvatarTarget__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AvatarTarget__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AvatarTarget__Enum_FWDDECL)
#include <Modloader/app/structs/AvatarTarget__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AvatarTarget__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
