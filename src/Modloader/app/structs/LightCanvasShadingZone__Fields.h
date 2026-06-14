#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvasShadingZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvasShadingZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvasShadingZone__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_LightCanvasShadingZone__Fields_DEFINED
struct LightCanvas__Array;
struct Renderer;
struct LightCanvasShadingZone__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsDirtyEditor_k__BackingField;
    struct LightCanvas__Array* LightCanvases;
    LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum ApplyFlags;

    int32_t Priority;
    struct Bounds m_bounds;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCanvasShadingZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCanvasShadingZone__Fields_FWDDECL
#include <Modloader/app/structs/LightCanvas__Array.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_LightCanvasShadingZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvasShadingZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvasShadingZone__Fields_FWDDECL)
#include <Modloader/app/structs/LightCanvasShadingZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvasShadingZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
