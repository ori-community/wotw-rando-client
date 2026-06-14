#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuTogglerItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuTogglerItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuTogglerItem_DEFINED)
#include <Modloader/app/structs/DebugMenuTogglerItem__Fields.h>
#if defined(IL2CPP_STRUCT_DebugMenuTogglerItem__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenuTogglerItem_DEFINED
struct DebugMenuTogglerItem__Class;
struct DebugMenuTogglerItem {
    struct DebugMenuTogglerItem__Class* klass;
    MonitorData* monitor;
    struct DebugMenuTogglerItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuTogglerItem_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuTogglerItem_FWDDECL
#include <Modloader/app/structs/DebugMenuTogglerItem__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuTogglerItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuTogglerItem_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuTogglerItem_FWDDECL)
#include <Modloader/app/structs/DebugMenuTogglerItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuTogglerItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
