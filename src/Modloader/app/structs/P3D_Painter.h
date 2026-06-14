#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Painter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Painter_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Painter_DEFINED)
#include <Modloader/app/structs/P3D_Painter__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_Painter__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_Painter_DEFINED
struct P3D_Painter__Class;
struct P3D_Painter {
    struct P3D_Painter__Class* klass;
    MonitorData* monitor;
    struct P3D_Painter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Painter_FWDDECL)
#define IL2CPP_STRUCT_P3D_Painter_FWDDECL
#include <Modloader/app/structs/P3D_Painter__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_Painter_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Painter_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Painter_FWDDECL)
#include <Modloader/app/structs/P3D_Painter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Painter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
