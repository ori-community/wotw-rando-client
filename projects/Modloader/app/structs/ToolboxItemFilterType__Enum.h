#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToolboxItemFilterType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToolboxItemFilterType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterType__Enum_DEFINED)
#define IL2CPP_STRUCT_ToolboxItemFilterType__Enum_DEFINED
enum class ToolboxItemFilterType__Enum : int32_t {
    Allow = 0x00000000,
    Custom = 0x00000001,
    Prevent = 0x00000002,
    Require = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ToolboxItemFilterType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ToolboxItemFilterType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ToolboxItemFilterType__Enum_FWDDECL)
#include <Modloader/app/structs/ToolboxItemFilterType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToolboxItemFilterType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
