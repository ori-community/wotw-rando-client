#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenu_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenu_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenu_DEFINED)
#include <Modloader/app/structs/DebugMenu__Fields.h>
#if defined(IL2CPP_STRUCT_DebugMenu__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenu_DEFINED
struct DebugMenu__Class;
struct DebugMenu {
    struct DebugMenu__Class* klass;
    MonitorData* monitor;
    struct DebugMenu__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenu_FWDDECL)
#define IL2CPP_STRUCT_DebugMenu_FWDDECL
#include <Modloader/app/structs/DebugMenu__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugMenu_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenu_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenu_FWDDECL)
#include <Modloader/app/structs/DebugMenu.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenu.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
