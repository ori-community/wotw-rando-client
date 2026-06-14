#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrawingContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrawingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawingContext_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_DrawingContext_DEFINED
struct DrawingContext {
    struct Rect Rect;
    float PixelsPerSecond;
    float ScaleFactor;
    float StartTime;
    float StartX;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrawingContext_FWDDECL)
#define IL2CPP_STRUCT_DrawingContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_DrawingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawingContext_DEFINED) && !defined(IL2CPP_STRUCT_DrawingContext_FWDDECL)
#include <Modloader/app/structs/DrawingContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrawingContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
