#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTester_TesterState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTester_TesterState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_TesterState__Enum_DEFINED)
#define IL2CPP_STRUCT_StressTester_TesterState__Enum_DEFINED
enum class StressTester_TesterState__Enum : int32_t {
    Resting = 0x00000000,
    GettingReady = 0x00000001,
    Moving = 0x00000002,
    Done = 0x00000003,
    LoadingNextPath = 0x00000004,
    TakingScreenshot = 0x00000005,
    RunningConfigTests = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_StressTester_TesterState__Enum_FWDDECL)
#define IL2CPP_STRUCT_StressTester_TesterState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_StressTester_TesterState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_TesterState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_StressTester_TesterState__Enum_FWDDECL)
#include <Modloader/app/structs/StressTester_TesterState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTester_TesterState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
