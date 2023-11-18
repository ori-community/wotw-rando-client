#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabLogLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabLogLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLogLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabLogLevel__Enum_DEFINED
enum class PlayFabLogLevel__Enum : int32_t {
    None = 0x00000000,
    Debug = 0x00000001,
    Info = 0x00000002,
    Warning = 0x00000004,
    Error = 0x00000008,
    All = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabLogLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_PlayFabLogLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayFabLogLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLogLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabLogLevel__Enum_FWDDECL)
#include <Modloader/app/structs/PlayFabLogLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabLogLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
