#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotHandle_DEFINED)
#define IL2CPP_STRUCT_ScreenshotHandle_DEFINED
struct ScreenshotHandle {
    uint32_t m_ScreenshotHandle;
};
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotHandle_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScreenshotHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotHandle_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotHandle_FWDDECL)
#include <Modloader/app/structs/ScreenshotHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
