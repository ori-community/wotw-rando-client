#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WarmupMenuAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WarmupMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WarmupMenuAction_DEFINED)
#include <Modloader/app/structs/WarmupMenuAction__Fields.h>
#if defined(IL2CPP_STRUCT_WarmupMenuAction__Fields_DEFINED)
#define IL2CPP_STRUCT_WarmupMenuAction_DEFINED
struct WarmupMenuAction__Class;
struct WarmupMenuAction {
    struct WarmupMenuAction__Class* klass;
    MonitorData* monitor;
    struct WarmupMenuAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WarmupMenuAction_FWDDECL)
#define IL2CPP_STRUCT_WarmupMenuAction_FWDDECL
#include <Modloader/app/structs/WarmupMenuAction__Class.h>
#endif
#undef IL2CPP_STRUCT_WarmupMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WarmupMenuAction_DEFINED) && !defined(IL2CPP_STRUCT_WarmupMenuAction_FWDDECL)
#include <Modloader/app/structs/WarmupMenuAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WarmupMenuAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
