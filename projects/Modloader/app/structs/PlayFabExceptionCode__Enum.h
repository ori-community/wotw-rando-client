#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabExceptionCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabExceptionCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabExceptionCode__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabExceptionCode__Enum_DEFINED
enum class PlayFabExceptionCode__Enum : int32_t {
    DeveloperKeyNotSet = 0x00000000,
    EntityTokenNotSet = 0x00000001,
    NotLoggedIn = 0x00000002,
    TitleNotSet = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabExceptionCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_PlayFabExceptionCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayFabExceptionCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabExceptionCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabExceptionCode__Enum_FWDDECL)
#include <Modloader/app/structs/PlayFabExceptionCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabExceptionCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
