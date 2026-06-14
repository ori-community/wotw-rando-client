#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_string_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_string_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_string_DEFINED)
#include <Modloader/app/structs/Datatype_string__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_string__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_string_DEFINED
struct Datatype_string__Class;
struct Datatype_string {
    struct Datatype_string__Class* klass;
    MonitorData* monitor;
    struct Datatype_string__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_string_FWDDECL)
#define IL2CPP_STRUCT_Datatype_string_FWDDECL
#include <Modloader/app/structs/Datatype_string__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_string_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_string_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_string_FWDDECL)
#include <Modloader/app/structs/Datatype_string.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_string.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
