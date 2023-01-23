#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_date_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_date_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_date_DEFINED)
#include <Modloader/app/structs/Datatype_date__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_date__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_date_DEFINED
struct Datatype_date__Class;
struct Datatype_date {
    struct Datatype_date__Class* klass;
    MonitorData* monitor;
    struct Datatype_date__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_date_FWDDECL)
#define IL2CPP_STRUCT_Datatype_date_FWDDECL
#include <Modloader/app/structs/Datatype_date__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_date_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_date_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_date_FWDDECL)
#include <Modloader/app/structs/Datatype_date.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_date.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
