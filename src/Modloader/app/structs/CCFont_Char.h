#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCFont_Char_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCFont_Char_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCFont_Char_DEFINED)
#include <Modloader/app/structs/CCFont_Char__Fields.h>
#if defined(IL2CPP_STRUCT_CCFont_Char__Fields_DEFINED)
#define IL2CPP_STRUCT_CCFont_Char_DEFINED
struct CCFont_Char__Class;
struct CCFont_Char {
    struct CCFont_Char__Class* klass;
    MonitorData* monitor;
    struct CCFont_Char__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCFont_Char_FWDDECL)
#define IL2CPP_STRUCT_CCFont_Char_FWDDECL
#include <Modloader/app/structs/CCFont_Char__Class.h>
#endif
#undef IL2CPP_STRUCT_CCFont_Char_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCFont_Char_DEFINED) && !defined(IL2CPP_STRUCT_CCFont_Char_FWDDECL)
#include <Modloader/app/structs/CCFont_Char.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCFont_Char.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
