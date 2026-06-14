#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_float_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_float_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_float_DEFINED)
#include <Modloader/app/structs/Datatype_float__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_float__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_float_DEFINED
struct Datatype_float__Class;
struct Datatype_float {
    struct Datatype_float__Class* klass;
    MonitorData* monitor;
    struct Datatype_float__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_float_FWDDECL)
#define IL2CPP_STRUCT_Datatype_float_FWDDECL
#include <Modloader/app/structs/Datatype_float__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_float_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_float_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_float_FWDDECL)
#include <Modloader/app/structs/Datatype_float.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_float.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
