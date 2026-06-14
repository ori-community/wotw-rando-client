#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_UndoState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_UndoState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_UndoState__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_UndoState__Fields_DEFINED
struct Texture2D;
struct Color32__Array;
struct __declspec(align(8)) P3D_UndoState__Fields {
    struct Texture2D* Texture;
    int32_t Width;
    int32_t Height;
    struct Color32__Array* Pixels;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_UndoState__Fields_FWDDECL)
#define IL2CPP_STRUCT_P3D_UndoState__Fields_FWDDECL
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_P3D_UndoState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_UndoState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_UndoState__Fields_FWDDECL)
#include <Modloader/app/structs/P3D_UndoState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_UndoState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
