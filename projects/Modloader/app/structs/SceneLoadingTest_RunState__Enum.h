#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_DEFINED
enum class SceneLoadingTest_RunState__Enum : int32_t {
    NotRunning = 0x00000000,
    Running = 0x00000001,
    Cancelling = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingTest_RunState__Enum_FWDDECL)
#include <Modloader/app/structs/SceneLoadingTest_RunState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingTest_RunState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
