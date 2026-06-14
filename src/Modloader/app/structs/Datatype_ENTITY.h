#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_ENTITY_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_ENTITY_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_ENTITY_DEFINED)
#include <Modloader/app/structs/Datatype_ENTITY__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_ENTITY__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_ENTITY_DEFINED
struct Datatype_ENTITY__Class;
struct Datatype_ENTITY {
    struct Datatype_ENTITY__Class* klass;
    MonitorData* monitor;
    struct Datatype_ENTITY__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_ENTITY_FWDDECL)
#define IL2CPP_STRUCT_Datatype_ENTITY_FWDDECL
#include <Modloader/app/structs/Datatype_ENTITY__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_ENTITY_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_ENTITY_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_ENTITY_FWDDECL)
#include <Modloader/app/structs/Datatype_ENTITY.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_ENTITY.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
