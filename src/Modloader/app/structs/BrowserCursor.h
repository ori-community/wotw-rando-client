#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserCursor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserCursor_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserCursor_DEFINED)
#include <Modloader/app/structs/BrowserCursor__Fields.h>
#if defined(IL2CPP_STRUCT_BrowserCursor__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserCursor_DEFINED
struct BrowserCursor__Class;
struct BrowserCursor {
    struct BrowserCursor__Class* klass;
    MonitorData* monitor;
    struct BrowserCursor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserCursor_FWDDECL)
#define IL2CPP_STRUCT_BrowserCursor_FWDDECL
#include <Modloader/app/structs/BrowserCursor__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserCursor_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserCursor_DEFINED) && !defined(IL2CPP_STRUCT_BrowserCursor_FWDDECL)
#include <Modloader/app/structs/BrowserCursor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserCursor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
