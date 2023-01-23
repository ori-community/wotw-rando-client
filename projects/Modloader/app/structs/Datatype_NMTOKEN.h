#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_NMTOKEN_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_NMTOKEN_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_NMTOKEN_DEFINED)
#include <Modloader/app/structs/Datatype_NMTOKEN__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_NMTOKEN__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_NMTOKEN_DEFINED
struct Datatype_NMTOKEN__Class;
struct Datatype_NMTOKEN {
    struct Datatype_NMTOKEN__Class* klass;
    MonitorData* monitor;
    struct Datatype_NMTOKEN__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_NMTOKEN_FWDDECL)
#define IL2CPP_STRUCT_Datatype_NMTOKEN_FWDDECL
#include <Modloader/app/structs/Datatype_NMTOKEN__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_NMTOKEN_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_NMTOKEN_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_NMTOKEN_FWDDECL)
#include <Modloader/app/structs/Datatype_NMTOKEN.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_NMTOKEN.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
