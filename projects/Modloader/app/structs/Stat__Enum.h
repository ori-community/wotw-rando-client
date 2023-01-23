#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stat__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stat__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stat__Enum_DEFINED)
#define IL2CPP_STRUCT_Stat__Enum_DEFINED
enum class Stat__Enum : int32_t {
    Mono_Update_Called = 0x00000005,
    Mono_Update_Bypassed = 0x00000006,
    Mono_FixedUpdate_Called = 0x00000007,
    Mono_FixedUpdate_Bypassed = 0x00000008,
    AllocDefault = 0x00000009,
    AllocTempJob = 0x0000000a,
    AllocTempBackgroundJob = 0x0000000b,
    AllocGameobject = 0x0000000c,
    AllocGfx = 0x0000000d,
    AllocTempThread = 0x0000000e,
    GPUMemorySize = 0x0000000f,
    GCTotalMemory = 0x00000010,
    MaxHeapSize = 0x00000011,
    GarbageCollect = 0x00000012,
    ScenesActive = 0x00000013,
    DynamicResolutionScale = 0x00000014,
    Count = 0x00000015,
};
#endif
#if !defined(IL2CPP_STRUCT_Stat__Enum_FWDDECL)
#define IL2CPP_STRUCT_Stat__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Stat__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stat__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Stat__Enum_FWDDECL)
#include <Modloader/app/structs/Stat__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stat__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
