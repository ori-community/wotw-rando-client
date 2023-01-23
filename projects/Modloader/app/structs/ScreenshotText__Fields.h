#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotText__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotText__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ScreenshotText__Fields_DEFINED
struct String;
struct __declspec(align(8)) ScreenshotText__Fields {
    struct Vector2 Position;
    struct String* Text;
    struct Color Color;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotText__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotText__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotText__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotText__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenshotText__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotText__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
