#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFPSTest_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFPSTest_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneFPSTest_State__Enum_DEFINED
enum class SceneFPSTest_State__Enum : int32_t {
    Idle = 0x00000000,
    StartLoadScene = 0x00000001,
    SceneLoading = 0x00000002,
    EndLoadScene = 0x00000003,
    StartTakeSample = 0x00000004,
    TakingSample = 0x00000005,
    EndTakeSample = 0x00000006,
    StartCPUSample = 0x00000007,
    TakingCPUSample = 0x00000008,
    EndCPUSample = 0x00000009,
    StartCPUBSample = 0x0000000a,
    TakingCPUBSample = 0x0000000b,
    EndCPUBSample = 0x0000000c,
    TakeMemorySnapshot = 0x0000000d,
    StartUnloadScene = 0x0000000e,
    UnloadingScene = 0x0000000f,
    EndUnloadScene = 0x00000010,
    Done = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_SceneFPSTest_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_SceneFPSTest_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SceneFPSTest_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SceneFPSTest_State__Enum_FWDDECL)
#include <Modloader/app/structs/SceneFPSTest_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFPSTest_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
