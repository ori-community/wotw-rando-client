#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_DEFINED)
#define IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_DEFINED
enum class NvnMemoryCaptureAgent_MemoryHeader__Enum : int32_t {
    GenericNvnMemory = 0x00000000,
    ShaderNvnMemory = 0x00000001,
    LBufferNvnMemory = 0x00000002,
    TextureNvnMemory = 0x00000003,
    RenderTargetNvnMemory = 0x00000004,
    TotalAllocatedNvnMemory = 0x00000005,
    TotalUsedNvnMemory = 0x00000006,
    LargestLBufferAlloc = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_FWDDECL)
#define IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NvnMemoryCaptureAgent_MemoryHeader__Enum_FWDDECL)
#include <Modloader/app/structs/NvnMemoryCaptureAgent_MemoryHeader__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NvnMemoryCaptureAgent_MemoryHeader__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
