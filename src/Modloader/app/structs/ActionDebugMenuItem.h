#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDebugMenuItem_DEFINED)
#include <Modloader/app/structs/ActionDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_ActionDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionDebugMenuItem_DEFINED
struct ActionDebugMenuItem__Class;
struct ActionDebugMenuItem {
    struct ActionDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct ActionDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_ActionDebugMenuItem_FWDDECL
#include <Modloader/app/structs/ActionDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_ActionDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/ActionDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
