#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextDebugMenuItem_DEFINED)
#include <Modloader/app/structs/TextDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_TextDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_TextDebugMenuItem_DEFINED
struct TextDebugMenuItem__Class;
struct TextDebugMenuItem {
    struct TextDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct TextDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_TextDebugMenuItem_FWDDECL
#include <Modloader/app/structs/TextDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_TextDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_TextDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/TextDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
