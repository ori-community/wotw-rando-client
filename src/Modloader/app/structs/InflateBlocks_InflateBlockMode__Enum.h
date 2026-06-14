#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_DEFINED)
#define IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_DEFINED
enum class InflateBlocks_InflateBlockMode__Enum : int32_t {
    TYPE = 0x00000000,
    LENS = 0x00000001,
    STORED = 0x00000002,
    TABLE = 0x00000003,
    BTREE = 0x00000004,
    DTREE = 0x00000005,
    CODES = 0x00000006,
    DRY = 0x00000007,
    DONE = 0x00000008,
    BAD = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InflateBlocks_InflateBlockMode__Enum_FWDDECL)
#include <Modloader/app/structs/InflateBlocks_InflateBlockMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InflateBlocks_InflateBlockMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
