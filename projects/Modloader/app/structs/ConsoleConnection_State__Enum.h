#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleConnection_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleConnection_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleConnection_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ConsoleConnection_State__Enum_DEFINED
enum class ConsoleConnection_State__Enum : int32_t {
    Disconnected = 0x00000000,
    Connecting = 0x00000001,
    Ready = 0x00000002,
    Receiving = 0x00000003,
    Pinging = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ConsoleConnection_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_ConsoleConnection_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ConsoleConnection_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleConnection_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleConnection_State__Enum_FWDDECL)
#include <Modloader/app/structs/ConsoleConnection_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleConnection_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
