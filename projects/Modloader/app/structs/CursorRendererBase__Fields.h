#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CursorRendererBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CursorRendererBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererBase__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CursorRendererBase__Fields_DEFINED
struct BrowserCursor;
struct CursorRendererBase__Fields {
    struct MonoBehaviour__Fields _;
    struct BrowserCursor* cursor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CursorRendererBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_CursorRendererBase__Fields_FWDDECL
#include <Modloader/app/structs/BrowserCursor.h>
#endif
#undef IL2CPP_STRUCT_CursorRendererBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CursorRendererBase__Fields_FWDDECL)
#include <Modloader/app/structs/CursorRendererBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CursorRendererBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
