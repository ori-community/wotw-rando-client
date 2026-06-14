#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CursorRendererOverlay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CursorRendererOverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererOverlay_DEFINED)
#include <Modloader/app/structs/CursorRendererOverlay__Fields.h>
#if defined(IL2CPP_STRUCT_CursorRendererOverlay__Fields_DEFINED)
#define IL2CPP_STRUCT_CursorRendererOverlay_DEFINED
struct CursorRendererOverlay__Class;
struct CursorRendererOverlay {
    struct CursorRendererOverlay__Class* klass;
    MonitorData* monitor;
    struct CursorRendererOverlay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CursorRendererOverlay_FWDDECL)
#define IL2CPP_STRUCT_CursorRendererOverlay_FWDDECL
#include <Modloader/app/structs/CursorRendererOverlay__Class.h>
#endif
#undef IL2CPP_STRUCT_CursorRendererOverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererOverlay_DEFINED) && !defined(IL2CPP_STRUCT_CursorRendererOverlay_FWDDECL)
#include <Modloader/app/structs/CursorRendererOverlay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CursorRendererOverlay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
