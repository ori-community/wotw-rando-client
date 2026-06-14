#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Viewport_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Viewport_INITIALIZING
#if !defined(IL2CPP_STRUCT_Viewport_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_Viewport_DEFINED
struct Viewport {
    struct Rect rect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Viewport_FWDDECL)
#define IL2CPP_STRUCT_Viewport_FWDDECL
#endif
#undef IL2CPP_STRUCT_Viewport_INITIALIZING
#if !defined(IL2CPP_STRUCT_Viewport_DEFINED) && !defined(IL2CPP_STRUCT_Viewport_FWDDECL)
#include <Modloader/app/structs/Viewport.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Viewport.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
