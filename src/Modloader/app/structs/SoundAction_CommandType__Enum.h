#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundAction_CommandType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundAction_CommandType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAction_CommandType__Enum_DEFINED)
#define IL2CPP_STRUCT_SoundAction_CommandType__Enum_DEFINED
enum class SoundAction_CommandType__Enum : int32_t {
    Play = 0x00000000,
    Pause = 0x00000001,
    Stop = 0x00000002,
    StopAndFadeOut = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_SoundAction_CommandType__Enum_FWDDECL)
#define IL2CPP_STRUCT_SoundAction_CommandType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SoundAction_CommandType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAction_CommandType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SoundAction_CommandType__Enum_FWDDECL)
#include <Modloader/app/structs/SoundAction_CommandType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundAction_CommandType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
