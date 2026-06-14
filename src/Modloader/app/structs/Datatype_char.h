#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_char_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_char_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_char_DEFINED)
#include <Modloader/app/structs/Datatype_char__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_char__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_char_DEFINED
struct Datatype_char__Class;
struct Datatype_char {
    struct Datatype_char__Class* klass;
    MonitorData* monitor;
    struct Datatype_char__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_char_FWDDECL)
#define IL2CPP_STRUCT_Datatype_char_FWDDECL
#include <Modloader/app/structs/Datatype_char__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_char_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_char_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_char_FWDDECL)
#include <Modloader/app/structs/Datatype_char.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_char.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
