#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitmapFont_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitmapFont_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitmapFont_DEFINED)
#include <Modloader/app/structs/BitmapFont__Fields.h>
#if defined(IL2CPP_STRUCT_BitmapFont__Fields_DEFINED)
#define IL2CPP_STRUCT_BitmapFont_DEFINED
struct BitmapFont__Class;
struct BitmapFont {
    struct BitmapFont__Class* klass;
    MonitorData* monitor;
    struct BitmapFont__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BitmapFont_FWDDECL)
#define IL2CPP_STRUCT_BitmapFont_FWDDECL
#include <Modloader/app/structs/BitmapFont__Class.h>
#endif
#undef IL2CPP_STRUCT_BitmapFont_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitmapFont_DEFINED) && !defined(IL2CPP_STRUCT_BitmapFont_FWDDECL)
#include <Modloader/app/structs/BitmapFont.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitmapFont.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
