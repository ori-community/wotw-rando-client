#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserCursor_CursorInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserCursor_CursorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserCursor_CursorInfo_DEFINED)
#include <Modloader/app/structs/BrowserCursor_CursorInfo__Fields.h>
#if defined(IL2CPP_STRUCT_BrowserCursor_CursorInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserCursor_CursorInfo_DEFINED
struct BrowserCursor_CursorInfo__Class;
struct BrowserCursor_CursorInfo {
    struct BrowserCursor_CursorInfo__Class* klass;
    MonitorData* monitor;
    struct BrowserCursor_CursorInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserCursor_CursorInfo_FWDDECL)
#define IL2CPP_STRUCT_BrowserCursor_CursorInfo_FWDDECL
#include <Modloader/app/structs/BrowserCursor_CursorInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserCursor_CursorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserCursor_CursorInfo_DEFINED) && !defined(IL2CPP_STRUCT_BrowserCursor_CursorInfo_FWDDECL)
#include <Modloader/app/structs/BrowserCursor_CursorInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserCursor_CursorInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
