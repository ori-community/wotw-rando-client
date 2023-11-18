#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrawRendererSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrawRendererSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawRendererSettings__Boxed_DEFINED)
#include <Modloader/app/structs/DrawRendererSettings.h>
#if defined(IL2CPP_STRUCT_DrawRendererSettings_DEFINED)
#define IL2CPP_STRUCT_DrawRendererSettings__Boxed_DEFINED
struct DrawRendererSettings__Class;
struct DrawRendererSettings__Boxed {
    struct DrawRendererSettings__Class* klass;
    MonitorData* monitor;
    struct DrawRendererSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrawRendererSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DrawRendererSettings__Boxed_FWDDECL
#include <Modloader/app/structs/DrawRendererSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_DrawRendererSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawRendererSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DrawRendererSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/DrawRendererSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrawRendererSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
