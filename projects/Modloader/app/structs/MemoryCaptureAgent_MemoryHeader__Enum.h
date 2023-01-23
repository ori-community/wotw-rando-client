#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_DEFINED)
#define IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_DEFINED
enum class MemoryCaptureAgent_MemoryHeader__Enum : int32_t {
    MemoryAvailable = 0x00000000,
    UnusedReservedMemory = 0x00000001,
    TextureMemory = 0x00000002,
    UsedMemory = 0x00000003,
    GcHeapSize = 0x00000004,
    GcUsedSize = 0x00000005,
    GcDesiredSize = 0x00000006,
    MissingMemSize = 0x00000007,
    AllocatableMemory = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_FWDDECL)
#define IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MemoryCaptureAgent_MemoryHeader__Enum_FWDDECL)
#include <Modloader/app/structs/MemoryCaptureAgent_MemoryHeader__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryCaptureAgent_MemoryHeader__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
