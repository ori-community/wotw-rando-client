#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_DEFINED)
#define IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_DEFINED
enum class OnlineHandler_OnlineHandlerState__Enum : int32_t {
    NotConnected = 0x00000000,
    Connected = 0x00000001,
    Connecting = 0x00000002,
    Invalid = 0x00000003,
    TryAgain = 0x00000004,
    NoToken = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_FWDDECL)
#define IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_FWDDECL)
#include <Modloader/app/structs/OnlineHandler_OnlineHandlerState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnlineHandler_OnlineHandlerState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
