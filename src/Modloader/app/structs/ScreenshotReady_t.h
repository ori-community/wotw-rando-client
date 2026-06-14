#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotReady_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotReady_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotReady_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/ScreenshotHandle.h>
#if defined(IL2CPP_STRUCT_ScreenshotHandle_DEFINED) && defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_ScreenshotReady_t_DEFINED
struct ScreenshotReady_t {
    struct ScreenshotHandle m_hLocal;
    EResult__Enum m_eResult;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotReady_t_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotReady_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScreenshotReady_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotReady_t_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotReady_t_FWDDECL)
#include <Modloader/app/structs/ScreenshotReady_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotReady_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
