#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_short_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_short_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_short_DEFINED)
#include <Modloader/app/structs/Datatype_short__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_short__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_short_DEFINED
struct Datatype_short__Class;
struct Datatype_short {
    struct Datatype_short__Class* klass;
    MonitorData* monitor;
    struct Datatype_short__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_short_FWDDECL)
#define IL2CPP_STRUCT_Datatype_short_FWDDECL
#include <Modloader/app/structs/Datatype_short__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_short_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_short_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_short_FWDDECL)
#include <Modloader/app/structs/Datatype_short.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_short.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
