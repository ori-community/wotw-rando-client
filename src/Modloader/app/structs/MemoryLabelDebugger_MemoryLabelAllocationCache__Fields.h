#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_DEFINED
struct String;
struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array;
struct __declspec(align(8)) MemoryLabelDebugger_MemoryLabelAllocationCache__Fields {
    int32_t LabelIndex;
    uint64_t SizeAllocated;
    uint64_t AllocationCount;
    struct String* LabelName;
    struct MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array* Buckets;
};
#endif
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_FWDDECL
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelBucketInfoCache__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemoryLabelDebugger_MemoryLabelAllocationCache__Fields_FWDDECL)
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryLabelDebugger_MemoryLabelAllocationCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
