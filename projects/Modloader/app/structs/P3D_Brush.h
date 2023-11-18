#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Brush_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Brush_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush_DEFINED)
#include <Modloader/app/structs/P3D_Brush__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_Brush__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_Brush_DEFINED
struct P3D_Brush__Class;
struct P3D_Brush {
    struct P3D_Brush__Class* klass;
    MonitorData* monitor;
    struct P3D_Brush__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Brush_FWDDECL)
#define IL2CPP_STRUCT_P3D_Brush_FWDDECL
#include <Modloader/app/structs/P3D_Brush__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_Brush_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Brush_FWDDECL)
#include <Modloader/app/structs/P3D_Brush.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Brush.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
