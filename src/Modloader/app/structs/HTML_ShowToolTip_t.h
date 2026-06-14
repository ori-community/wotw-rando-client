#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HTML_ShowToolTip_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HTML_ShowToolTip_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTML_ShowToolTip_t_DEFINED)
#include <Modloader/app/structs/HHTMLBrowser.h>
#if defined(IL2CPP_STRUCT_HHTMLBrowser_DEFINED)
#define IL2CPP_STRUCT_HTML_ShowToolTip_t_DEFINED
struct String;
struct HTML_ShowToolTip_t {
    struct HHTMLBrowser unBrowserHandle;
    struct String* pchMsg;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HTML_ShowToolTip_t_FWDDECL)
#define IL2CPP_STRUCT_HTML_ShowToolTip_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HTML_ShowToolTip_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTML_ShowToolTip_t_DEFINED) && !defined(IL2CPP_STRUCT_HTML_ShowToolTip_t_FWDDECL)
#include <Modloader/app/structs/HTML_ShowToolTip_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HTML_ShowToolTip_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
