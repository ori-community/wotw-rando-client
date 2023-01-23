#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Rect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Rect_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Rect_DEFINED)
#define IL2CPP_STRUCT_P3D_Rect_DEFINED
struct P3D_Rect {
    int32_t XMin;
    int32_t XMax;
    int32_t YMin;
    int32_t YMax;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_Rect_FWDDECL)
#define IL2CPP_STRUCT_P3D_Rect_FWDDECL
#endif
#undef IL2CPP_STRUCT_P3D_Rect_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Rect_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Rect_FWDDECL)
#include <Modloader/app/structs/P3D_Rect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Rect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
