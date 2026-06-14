#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZoomDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZoomDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoomDebugMenuItem_DEFINED)
#include <Modloader/app/structs/ZoomDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_ZoomDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ZoomDebugMenuItem_DEFINED
struct ZoomDebugMenuItem__Class;
struct ZoomDebugMenuItem {
    struct ZoomDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct ZoomDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZoomDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_ZoomDebugMenuItem_FWDDECL
#include <Modloader/app/structs/ZoomDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ZoomDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoomDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_ZoomDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/ZoomDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZoomDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
