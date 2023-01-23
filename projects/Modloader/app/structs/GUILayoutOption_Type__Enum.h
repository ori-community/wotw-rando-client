#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutOption_Type__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutOption_Type__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutOption_Type__Enum_DEFINED)
#define IL2CPP_STRUCT_GUILayoutOption_Type__Enum_DEFINED
enum class GUILayoutOption_Type__Enum : int32_t {
    fixedWidth = 0x00000000,
    fixedHeight = 0x00000001,
    minWidth = 0x00000002,
    maxWidth = 0x00000003,
    minHeight = 0x00000004,
    maxHeight = 0x00000005,
    stretchWidth = 0x00000006,
    stretchHeight = 0x00000007,
    alignStart = 0x00000008,
    alignMiddle = 0x00000009,
    alignEnd = 0x0000000a,
    alignJustify = 0x0000000b,
    equalSize = 0x0000000c,
    spacing = 0x0000000d,
};
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutOption_Type__Enum_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutOption_Type__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GUILayoutOption_Type__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutOption_Type__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutOption_Type__Enum_FWDDECL)
#include <Modloader/app/structs/GUILayoutOption_Type__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutOption_Type__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
