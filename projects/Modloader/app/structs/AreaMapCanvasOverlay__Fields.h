#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_DEFINED
struct AreaMapCanvas;
struct Renderer;
struct Transform;
struct AreaMapCanvasOverlay__Fields {
    struct MonoBehaviour__Fields _;
    struct AreaMapCanvas* Canvas;
    struct Rect PixelRect;
    int32_t Width;
    int32_t Height;
    struct Renderer* m_renderer;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_FWDDECL
#include <Modloader/app/structs/AreaMapCanvas.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapCanvasOverlay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapCanvasOverlay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
