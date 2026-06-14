#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToolboxItemAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToolboxItemAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToolboxItemAttribute_DEFINED)
#include <Modloader/app/structs/ToolboxItemAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ToolboxItemAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ToolboxItemAttribute_DEFINED
struct ToolboxItemAttribute__Class;
struct ToolboxItemAttribute {
    struct ToolboxItemAttribute__Class* klass;
    MonitorData* monitor;
    struct ToolboxItemAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToolboxItemAttribute_FWDDECL)
#define IL2CPP_STRUCT_ToolboxItemAttribute_FWDDECL
#include <Modloader/app/structs/ToolboxItemAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ToolboxItemAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToolboxItemAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ToolboxItemAttribute_FWDDECL)
#include <Modloader/app/structs/ToolboxItemAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToolboxItemAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
