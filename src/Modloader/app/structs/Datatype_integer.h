#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_integer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_integer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_integer_DEFINED)
#include <Modloader/app/structs/Datatype_integer__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_integer__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_integer_DEFINED
struct Datatype_integer__Class;
struct Datatype_integer {
    struct Datatype_integer__Class* klass;
    MonitorData* monitor;
    struct Datatype_integer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_integer_FWDDECL)
#define IL2CPP_STRUCT_Datatype_integer_FWDDECL
#include <Modloader/app/structs/Datatype_integer__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_integer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_integer_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_integer_FWDDECL)
#include <Modloader/app/structs/Datatype_integer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_integer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
