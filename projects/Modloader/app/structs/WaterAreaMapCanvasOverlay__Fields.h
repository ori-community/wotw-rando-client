#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_DEFINED)
#include <Modloader/app/structs/AreaMapCanvasOverlay__Fields.h>
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_AreaMapCanvasOverlay__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_DEFINED
struct WaterAreaMapCanvasOverlay__Fields {
    struct AreaMapCanvasOverlay__Fields _;
    struct Color CleanWater;
    struct Color DirtyWater;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaterAreaMapCanvasOverlay__Fields_FWDDECL)
#include <Modloader/app/structs/WaterAreaMapCanvasOverlay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterAreaMapCanvasOverlay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
