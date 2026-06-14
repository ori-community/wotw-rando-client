#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionsTest_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionsTest_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionsTest_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ExceptionsTest_State__Enum_DEFINED
enum class ExceptionsTest_State__Enum : int32_t {
    Idle = 0x00000000,
    StartLoadScene = 0x00000001,
    SceneLoading = 0x00000002,
    EndLoadScene = 0x00000003,
    StartTest = 0x00000004,
    Testing = 0x00000005,
    EndTest = 0x00000006,
    StartUnloadScene = 0x00000007,
    UnloadingScene = 0x00000008,
    EndUnloadScene = 0x00000009,
    Done = 0x0000000a,
};
#endif
#if !defined(IL2CPP_STRUCT_ExceptionsTest_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_ExceptionsTest_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ExceptionsTest_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionsTest_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionsTest_State__Enum_FWDDECL)
#include <Modloader/app/structs/ExceptionsTest_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionsTest_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
