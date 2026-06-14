#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_DEFINED)
#define IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_DEFINED
enum class UberGCLogic_MemoryProbeType__Enum : int32_t {
    GcHeapAllocated = 0x00000000,
    MemoryManagerAllocated = 0x00000001,
    NvnAllocated = 0x00000002,
    GcHeapReserved = 0x00000003,
    MemoryManagerReserved = 0x00000004,
    NvnReserved = 0x00000005,
    PhysicalFree = 0x00000006,
    PhysicalAllocatable = 0x00000007,
    DesiredMaxHeapSize = 0x00000008,
    SystemMemorySize = 0x00000009,
    ActualUsage = 0x0000000a,
    Count = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_FWDDECL)
#define IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UberGCLogic_MemoryProbeType__Enum_FWDDECL)
#include <Modloader/app/structs/UberGCLogic_MemoryProbeType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGCLogic_MemoryProbeType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
