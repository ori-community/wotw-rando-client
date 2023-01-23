#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_duration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_duration_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_duration_DEFINED)
#include <Modloader/app/structs/Datatype_duration__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_duration__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_duration_DEFINED
struct Datatype_duration__Class;
struct Datatype_duration {
    struct Datatype_duration__Class* klass;
    MonitorData* monitor;
    struct Datatype_duration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_duration_FWDDECL)
#define IL2CPP_STRUCT_Datatype_duration_FWDDECL
#include <Modloader/app/structs/Datatype_duration__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_duration_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_duration_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_duration_FWDDECL)
#include <Modloader/app/structs/Datatype_duration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_duration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
