#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitmapFontChar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitmapFontChar_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitmapFontChar_DEFINED)
#include <Modloader/app/structs/BitmapFontChar__Fields.h>
#if defined(IL2CPP_STRUCT_BitmapFontChar__Fields_DEFINED)
#define IL2CPP_STRUCT_BitmapFontChar_DEFINED
struct BitmapFontChar__Class;
struct BitmapFontChar {
    struct BitmapFontChar__Class* klass;
    MonitorData* monitor;
    struct BitmapFontChar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BitmapFontChar_FWDDECL)
#define IL2CPP_STRUCT_BitmapFontChar_FWDDECL
#include <Modloader/app/structs/BitmapFontChar__Class.h>
#endif
#undef IL2CPP_STRUCT_BitmapFontChar_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitmapFontChar_DEFINED) && !defined(IL2CPP_STRUCT_BitmapFontChar_FWDDECL)
#include <Modloader/app/structs/BitmapFontChar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitmapFontChar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
