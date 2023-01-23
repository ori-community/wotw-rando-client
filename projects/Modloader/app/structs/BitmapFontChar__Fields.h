#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitmapFontChar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitmapFontChar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitmapFontChar__Fields_DEFINED)
#define IL2CPP_STRUCT_BitmapFontChar__Fields_DEFINED
struct String;
struct Int32__Array;
struct Single__Array;
struct __declspec(align(8)) BitmapFontChar__Fields {
    int32_t id;
    struct String* emoji;
    float uMin;
    float uMax;
    float vMin;
    float vMax;
    float xOffset;
    float yOffset;
    float width;
    float height;
    float advance;
    struct Int32__Array* kerningIds;
    struct Single__Array* kernings;
};
#endif
#if !defined(IL2CPP_STRUCT_BitmapFontChar__Fields_FWDDECL)
#define IL2CPP_STRUCT_BitmapFontChar__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BitmapFontChar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitmapFontChar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BitmapFontChar__Fields_FWDDECL)
#include <Modloader/app/structs/BitmapFontChar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitmapFontChar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
