#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative_RenderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative_RenderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_RenderData_DEFINED)
#define IL2CPP_STRUCT_BrowserNative_RenderData_DEFINED
struct BrowserNative_RenderData {
    void* pixels;
    int32_t w;
    int32_t h;
};
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative_RenderData_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative_RenderData_FWDDECL
#endif
#undef IL2CPP_STRUCT_BrowserNative_RenderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_RenderData_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative_RenderData_FWDDECL)
#include <Modloader/app/structs/BrowserNative_RenderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative_RenderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
