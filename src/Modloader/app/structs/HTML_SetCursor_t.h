#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HTML_SetCursor_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HTML_SetCursor_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTML_SetCursor_t_DEFINED)
#include <Modloader/app/structs/HHTMLBrowser.h>
#if defined(IL2CPP_STRUCT_HHTMLBrowser_DEFINED)
#define IL2CPP_STRUCT_HTML_SetCursor_t_DEFINED
struct HTML_SetCursor_t {
    struct HHTMLBrowser unBrowserHandle;
    uint32_t eMouseCursor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HTML_SetCursor_t_FWDDECL)
#define IL2CPP_STRUCT_HTML_SetCursor_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_HTML_SetCursor_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTML_SetCursor_t_DEFINED) && !defined(IL2CPP_STRUCT_HTML_SetCursor_t_FWDDECL)
#include <Modloader/app/structs/HTML_SetCursor_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HTML_SetCursor_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
