#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationType__Enum_DEFINED)
#define IL2CPP_STRUCT_AnimationType__Enum_DEFINED
enum class AnimationType__Enum : int32_t {
    Clip = 0x00000000,
    Blend = 0x00000001,
    DirectBlend = 0x00000002,
    Blend2D = 0x00000003,
    Crossfade = 0x00000004,
    Layered = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationType__Enum_FWDDECL)
#define IL2CPP_STRUCT_AnimationType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AnimationType__Enum_FWDDECL)
#include <Modloader/app/structs/AnimationType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
