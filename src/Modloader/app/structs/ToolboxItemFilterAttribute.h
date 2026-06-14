#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToolboxItemFilterAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToolboxItemFilterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute_DEFINED)
#include <Modloader/app/structs/ToolboxItemFilterAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ToolboxItemFilterAttribute_DEFINED
struct ToolboxItemFilterAttribute__Class;
struct ToolboxItemFilterAttribute {
    struct ToolboxItemFilterAttribute__Class* klass;
    MonitorData* monitor;
    struct ToolboxItemFilterAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute_FWDDECL)
#define IL2CPP_STRUCT_ToolboxItemFilterAttribute_FWDDECL
#include <Modloader/app/structs/ToolboxItemFilterAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ToolboxItemFilterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ToolboxItemFilterAttribute_FWDDECL)
#include <Modloader/app/structs/ToolboxItemFilterAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToolboxItemFilterAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
