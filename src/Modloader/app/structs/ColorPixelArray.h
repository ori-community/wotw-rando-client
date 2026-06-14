#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorPixelArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorPixelArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorPixelArray_DEFINED)
#include <Modloader/app/structs/ColorPixelArray__Fields.h>
#if defined(IL2CPP_STRUCT_ColorPixelArray__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorPixelArray_DEFINED
struct ColorPixelArray__Class;
struct ColorPixelArray {
    struct ColorPixelArray__Class* klass;
    MonitorData* monitor;
    struct ColorPixelArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorPixelArray_FWDDECL)
#define IL2CPP_STRUCT_ColorPixelArray_FWDDECL
#include <Modloader/app/structs/ColorPixelArray__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorPixelArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorPixelArray_DEFINED) && !defined(IL2CPP_STRUCT_ColorPixelArray_FWDDECL)
#include <Modloader/app/structs/ColorPixelArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorPixelArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
