#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_ENUMERATION_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_ENUMERATION_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_ENUMERATION_DEFINED)
#include <Modloader/app/structs/Datatype_ENUMERATION__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_ENUMERATION__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_ENUMERATION_DEFINED
struct Datatype_ENUMERATION__Class;
struct Datatype_ENUMERATION {
    struct Datatype_ENUMERATION__Class* klass;
    MonitorData* monitor;
    struct Datatype_ENUMERATION__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_ENUMERATION_FWDDECL)
#define IL2CPP_STRUCT_Datatype_ENUMERATION_FWDDECL
#include <Modloader/app/structs/Datatype_ENUMERATION__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_ENUMERATION_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_ENUMERATION_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_ENUMERATION_FWDDECL)
#include <Modloader/app/structs/Datatype_ENUMERATION.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_ENUMERATION.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
