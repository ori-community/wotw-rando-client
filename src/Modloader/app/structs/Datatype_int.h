#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_int_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_int_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_int_DEFINED)
#include <Modloader/app/structs/Datatype_int__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_int__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_int_DEFINED
struct Datatype_int__Class;
struct Datatype_int {
    struct Datatype_int__Class* klass;
    MonitorData* monitor;
    struct Datatype_int__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_int_FWDDECL)
#define IL2CPP_STRUCT_Datatype_int_FWDDECL
#include <Modloader/app/structs/Datatype_int__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_int_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_int_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_int_FWDDECL)
#include <Modloader/app/structs/Datatype_int.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_int.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
