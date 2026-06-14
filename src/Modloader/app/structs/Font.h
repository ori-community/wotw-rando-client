#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Font_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Font_INITIALIZING
#if !defined(IL2CPP_STRUCT_Font_DEFINED)
#include <Modloader/app/structs/Font__Fields.h>
#if defined(IL2CPP_STRUCT_Font__Fields_DEFINED)
#define IL2CPP_STRUCT_Font_DEFINED
struct Font__Class;
struct Font {
    struct Font__Class* klass;
    MonitorData* monitor;
    struct Font__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Font_FWDDECL)
#define IL2CPP_STRUCT_Font_FWDDECL
#include <Modloader/app/structs/Font__Class.h>
#endif
#undef IL2CPP_STRUCT_Font_INITIALIZING
#if !defined(IL2CPP_STRUCT_Font_DEFINED) && !defined(IL2CPP_STRUCT_Font_FWDDECL)
#include <Modloader/app/structs/Font.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Font.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
