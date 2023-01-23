#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_BrushPreview_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_BrushPreview_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_BrushPreview_DEFINED)
#include <Modloader/app/structs/P3D_BrushPreview__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_BrushPreview__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_BrushPreview_DEFINED
struct P3D_BrushPreview__Class;
struct P3D_BrushPreview {
    struct P3D_BrushPreview__Class* klass;
    MonitorData* monitor;
    struct P3D_BrushPreview__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_BrushPreview_FWDDECL)
#define IL2CPP_STRUCT_P3D_BrushPreview_FWDDECL
#include <Modloader/app/structs/P3D_BrushPreview__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_BrushPreview_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_BrushPreview_DEFINED) && !defined(IL2CPP_STRUCT_P3D_BrushPreview_FWDDECL)
#include <Modloader/app/structs/P3D_BrushPreview.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_BrushPreview.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
