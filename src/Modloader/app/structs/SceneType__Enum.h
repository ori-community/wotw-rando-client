#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneType__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneType__Enum_DEFINED
enum class SceneType__Enum : int32_t {
    Unspecified = 0x00000000,
    Puzzle = 0x00000001,
    Challenge = 0x00000002,
    Mood = 0x00000003,
    Cinematic = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_SceneType__Enum_FWDDECL)
#define IL2CPP_STRUCT_SceneType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SceneType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SceneType__Enum_FWDDECL)
#include <Modloader/app/structs/SceneType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
