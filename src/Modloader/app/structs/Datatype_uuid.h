#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_uuid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_uuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_uuid_DEFINED)
#include <Modloader/app/structs/Datatype_uuid__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_uuid__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_uuid_DEFINED
struct Datatype_uuid__Class;
struct Datatype_uuid {
    struct Datatype_uuid__Class* klass;
    MonitorData* monitor;
    struct Datatype_uuid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_uuid_FWDDECL)
#define IL2CPP_STRUCT_Datatype_uuid_FWDDECL
#include <Modloader/app/structs/Datatype_uuid__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_uuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_uuid_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_uuid_FWDDECL)
#include <Modloader/app/structs/Datatype_uuid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_uuid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
