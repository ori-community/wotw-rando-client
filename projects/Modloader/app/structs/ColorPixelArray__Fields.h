#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorPixelArray__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorPixelArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorPixelArray__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorPixelArray__Fields_DEFINED
struct Color32__Array;
struct __declspec(align(8)) ColorPixelArray__Fields {
    struct Color32__Array* Colors;
    int32_t Width;
    int32_t Height;
};
#endif
#if !defined(IL2CPP_STRUCT_ColorPixelArray__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorPixelArray__Fields_FWDDECL
#include <Modloader/app/structs/Color32__Array.h>
#endif
#undef IL2CPP_STRUCT_ColorPixelArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorPixelArray__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorPixelArray__Fields_FWDDECL)
#include <Modloader/app/structs/ColorPixelArray__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorPixelArray__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
