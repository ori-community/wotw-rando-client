#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRState__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRState__Enum_DEFINED
enum class EVRState__Enum : int32_t {
    Undefined = -1,
    Off = 0x00000000,
    Searching = 0x00000001,
    Searching_Alert = 0x00000002,
    Ready = 0x00000003,
    Ready_Alert = 0x00000004,
    NotReady = 0x00000005,
    Standby = 0x00000006,
    Ready_Alert_Low = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRState__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRState__Enum_FWDDECL)
#include <Modloader/app/structs/EVRState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
