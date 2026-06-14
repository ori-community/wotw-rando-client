#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ESteamItemFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ESteamItemFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ESteamItemFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_ESteamItemFlags__Enum_DEFINED
enum class ESteamItemFlags__Enum : int32_t {
    k_ESteamItemNoTrade = 0x00000001,
    k_ESteamItemRemoved = 0x00000100,
    k_ESteamItemConsumed = 0x00000200,
};
#endif
#if !defined(IL2CPP_STRUCT_ESteamItemFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_ESteamItemFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ESteamItemFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ESteamItemFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ESteamItemFlags__Enum_FWDDECL)
#include <Modloader/app/structs/ESteamItemFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ESteamItemFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
