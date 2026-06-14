#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Selectable_SelectionState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Selectable_SelectionState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Selectable_SelectionState__Enum_DEFINED)
#define IL2CPP_STRUCT_Selectable_SelectionState__Enum_DEFINED
enum class Selectable_SelectionState__Enum : int32_t {
    Normal = 0x00000000,
    Highlighted = 0x00000001,
    Pressed = 0x00000002,
    Disabled = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_Selectable_SelectionState__Enum_FWDDECL)
#define IL2CPP_STRUCT_Selectable_SelectionState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Selectable_SelectionState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Selectable_SelectionState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Selectable_SelectionState__Enum_FWDDECL)
#include <Modloader/app/structs/Selectable_SelectionState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Selectable_SelectionState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
