#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_DEFINED)
#include <Modloader/app/structs/ToolboxItemFilterType__Enum.h>
#if defined(IL2CPP_STRUCT_ToolboxItemFilterType__Enum_DEFINED)
#define IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) ToolboxItemFilterAttribute__Fields {
    ToolboxItemFilterType__Enum filterType;

    struct String* filterString;
    struct String* typeId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/ToolboxItemFilterAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToolboxItemFilterAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
