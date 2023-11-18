#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMemPoolAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMemPoolAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMemPoolAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_AkMemPoolAttributes__Enum_DEFINED
enum class AkMemPoolAttributes__Enum : int32_t {
    AkNoAlloc = 0x00000000,
    AkMalloc = 0x00000001,
    AkVirtualAlloc = 0x00000002,
    AkAllocMask = 0x00000003,
    AkFixedSizeBlocksMode = 0x00000008,
    AkBlockMgmtMask = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_AkMemPoolAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkMemPoolAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkMemPoolAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMemPoolAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkMemPoolAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/AkMemPoolAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMemPoolAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
