#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntDebugMenuItem_DEFINED)
#include <Modloader/app/structs/IntDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_IntDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_IntDebugMenuItem_DEFINED
struct IntDebugMenuItem__Class;
struct IntDebugMenuItem {
    struct IntDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct IntDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_IntDebugMenuItem_FWDDECL
#include <Modloader/app/structs/IntDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_IntDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_IntDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/IntDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
