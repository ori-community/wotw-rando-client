#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_IDREF_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_IDREF_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_IDREF_DEFINED)
#include <Modloader/app/structs/Datatype_IDREF__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_IDREF__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_IDREF_DEFINED
struct Datatype_IDREF__Class;
struct Datatype_IDREF {
    struct Datatype_IDREF__Class* klass;
    MonitorData* monitor;
    struct Datatype_IDREF__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_IDREF_FWDDECL)
#define IL2CPP_STRUCT_Datatype_IDREF_FWDDECL
#include <Modloader/app/structs/Datatype_IDREF__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_IDREF_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_IDREF_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_IDREF_FWDDECL)
#include <Modloader/app/structs/Datatype_IDREF.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_IDREF.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
