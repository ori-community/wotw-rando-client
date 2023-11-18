#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_fixed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_fixed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_fixed_DEFINED)
#include <Modloader/app/structs/Datatype_fixed__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_fixed__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_fixed_DEFINED
struct Datatype_fixed__Class;
struct Datatype_fixed {
    struct Datatype_fixed__Class* klass;
    MonitorData* monitor;
    struct Datatype_fixed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_fixed_FWDDECL)
#define IL2CPP_STRUCT_Datatype_fixed_FWDDECL
#include <Modloader/app/structs/Datatype_fixed__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_fixed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_fixed_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_fixed_FWDDECL)
#include <Modloader/app/structs/Datatype_fixed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_fixed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
