#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeafsDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeafsDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeafsDebugMenuItem_DEFINED)
#include <Modloader/app/structs/LeafsDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_LeafsDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_LeafsDebugMenuItem_DEFINED
struct LeafsDebugMenuItem__Class;
struct LeafsDebugMenuItem {
    struct LeafsDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct LeafsDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeafsDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_LeafsDebugMenuItem_FWDDECL
#include <Modloader/app/structs/LeafsDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_LeafsDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeafsDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_LeafsDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/LeafsDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeafsDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
