#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SearchDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SearchDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchDebugMenuItem_DEFINED)
#include <Modloader/app/structs/SearchDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_SearchDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_SearchDebugMenuItem_DEFINED
struct SearchDebugMenuItem__Class;
struct SearchDebugMenuItem {
    struct SearchDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct SearchDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SearchDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_SearchDebugMenuItem_FWDDECL
#include <Modloader/app/structs/SearchDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_SearchDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_SearchDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/SearchDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SearchDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
