#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HTML_NeedsPaint_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HTML_NeedsPaint_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTML_NeedsPaint_t_DEFINED)
#include <Modloader/app/structs/HHTMLBrowser.h>
#if defined(IL2CPP_STRUCT_HHTMLBrowser_DEFINED)
#define IL2CPP_STRUCT_HTML_NeedsPaint_t_DEFINED
struct HTML_NeedsPaint_t {
    struct HHTMLBrowser unBrowserHandle;
    void* pBGRA;
    uint32_t unWide;
    uint32_t unTall;
    uint32_t unUpdateX;
    uint32_t unUpdateY;
    uint32_t unUpdateWide;
    uint32_t unUpdateTall;
    uint32_t unScrollX;
    uint32_t unScrollY;
    float flPageScale;
    uint32_t unPageSerial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HTML_NeedsPaint_t_FWDDECL)
#define IL2CPP_STRUCT_HTML_NeedsPaint_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_HTML_NeedsPaint_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTML_NeedsPaint_t_DEFINED) && !defined(IL2CPP_STRUCT_HTML_NeedsPaint_t_FWDDECL)
#include <Modloader/app/structs/HTML_NeedsPaint_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HTML_NeedsPaint_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
