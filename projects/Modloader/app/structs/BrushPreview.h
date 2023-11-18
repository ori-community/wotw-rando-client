#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrushPreview_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrushPreview_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrushPreview_DEFINED)
#include <Modloader/app/structs/BrushPreview__Fields.h>
#if defined(IL2CPP_STRUCT_BrushPreview__Fields_DEFINED)
#define IL2CPP_STRUCT_BrushPreview_DEFINED
struct BrushPreview__Class;
struct BrushPreview {
    struct BrushPreview__Class* klass;
    MonitorData* monitor;
    struct BrushPreview__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrushPreview_FWDDECL)
#define IL2CPP_STRUCT_BrushPreview_FWDDECL
#include <Modloader/app/structs/BrushPreview__Class.h>
#endif
#undef IL2CPP_STRUCT_BrushPreview_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrushPreview_DEFINED) && !defined(IL2CPP_STRUCT_BrushPreview_FWDDECL)
#include <Modloader/app/structs/BrushPreview.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrushPreview.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
