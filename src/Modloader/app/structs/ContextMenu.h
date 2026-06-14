#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContextMenu_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContextMenu_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextMenu_DEFINED)
#include <Modloader/app/structs/ContextMenu__Fields.h>
#if defined(IL2CPP_STRUCT_ContextMenu__Fields_DEFINED)
#define IL2CPP_STRUCT_ContextMenu_DEFINED
struct ContextMenu__Class;
struct ContextMenu {
    struct ContextMenu__Class* klass;
    MonitorData* monitor;
    struct ContextMenu__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContextMenu_FWDDECL)
#define IL2CPP_STRUCT_ContextMenu_FWDDECL
#include <Modloader/app/structs/ContextMenu__Class.h>
#endif
#undef IL2CPP_STRUCT_ContextMenu_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextMenu_DEFINED) && !defined(IL2CPP_STRUCT_ContextMenu_FWDDECL)
#include <Modloader/app/structs/ContextMenu.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContextMenu.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
