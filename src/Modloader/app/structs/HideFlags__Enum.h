#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HideFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HideFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_HideFlags__Enum_DEFINED
enum class HideFlags__Enum : int32_t {
    None = 0x00000000,
    HideInHierarchy = 0x00000001,
    HideInInspector = 0x00000002,
    DontSaveInEditor = 0x00000004,
    NotEditable = 0x00000008,
    DontSaveInBuild = 0x00000010,
    DontUnloadUnusedAsset = 0x00000020,
    DontSave = 0x00000034,
    HideAndDontSave = 0x0000003d,
};
#endif
#if !defined(IL2CPP_STRUCT_HideFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_HideFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HideFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HideFlags__Enum_FWDDECL)
#include <Modloader/app/structs/HideFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HideFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
