#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TradeStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TradeStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TradeStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_TradeStatus__Enum_DEFINED
enum class TradeStatus__Enum : int32_t {
    Invalid = 0x00000000,
    Opening = 0x00000001,
    Open = 0x00000002,
    Accepting = 0x00000003,
    Accepted = 0x00000004,
    Filled = 0x00000005,
    Cancelled = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_TradeStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_TradeStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TradeStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TradeStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TradeStatus__Enum_FWDDECL)
#include <Modloader/app/structs/TradeStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TradeStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
