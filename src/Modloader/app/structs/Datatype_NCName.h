#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_NCName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_NCName_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_NCName_DEFINED)
#include <Modloader/app/structs/Datatype_NCName__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_NCName__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_NCName_DEFINED
struct Datatype_NCName__Class;
struct Datatype_NCName {
    struct Datatype_NCName__Class* klass;
    MonitorData* monitor;
    struct Datatype_NCName__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_NCName_FWDDECL)
#define IL2CPP_STRUCT_Datatype_NCName_FWDDECL
#include <Modloader/app/structs/Datatype_NCName__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_NCName_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_NCName_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_NCName_FWDDECL)
#include <Modloader/app/structs/Datatype_NCName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_NCName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
