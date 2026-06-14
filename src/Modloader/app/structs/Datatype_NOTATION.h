#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_NOTATION_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_NOTATION_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_NOTATION_DEFINED)
#include <Modloader/app/structs/Datatype_NOTATION__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_NOTATION__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_NOTATION_DEFINED
struct Datatype_NOTATION__Class;
struct Datatype_NOTATION {
    struct Datatype_NOTATION__Class* klass;
    MonitorData* monitor;
    struct Datatype_NOTATION__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_NOTATION_FWDDECL)
#define IL2CPP_STRUCT_Datatype_NOTATION_FWDDECL
#include <Modloader/app/structs/Datatype_NOTATION__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_NOTATION_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_NOTATION_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_NOTATION_FWDDECL)
#include <Modloader/app/structs/Datatype_NOTATION.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_NOTATION.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
