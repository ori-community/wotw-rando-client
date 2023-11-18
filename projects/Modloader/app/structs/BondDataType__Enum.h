#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BondDataType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BondDataType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BondDataType__Enum_DEFINED)
#define IL2CPP_STRUCT_BondDataType__Enum_DEFINED
enum class BondDataType__Enum : int32_t {
    BT_STOP = 0x00000000,
    BT_STOP_BASE = 0x00000001,
    BT_BOOL = 0x00000002,
    BT_UINT8 = 0x00000003,
    BT_UINT16 = 0x00000004,
    BT_UINT32 = 0x00000005,
    BT_UINT64 = 0x00000006,
    BT_FLOAT = 0x00000007,
    BT_DOUBLE = 0x00000008,
    BT_STRING = 0x00000009,
    BT_STRUCT = 0x0000000a,
    BT_LIST = 0x0000000b,
    BT_SET = 0x0000000c,
    BT_MAP = 0x0000000d,
    BT_INT8 = 0x0000000e,
    BT_INT16 = 0x0000000f,
    BT_INT32 = 0x00000010,
    BT_INT64 = 0x00000011,
    BT_WSTRING = 0x00000012,
    BT_UNAVAILABLE = 0x0000007f,
};
#endif
#if !defined(IL2CPP_STRUCT_BondDataType__Enum_FWDDECL)
#define IL2CPP_STRUCT_BondDataType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BondDataType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BondDataType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BondDataType__Enum_FWDDECL)
#include <Modloader/app/structs/BondDataType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BondDataType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
