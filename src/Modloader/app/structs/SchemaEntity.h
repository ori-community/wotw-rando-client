#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaEntity_DEFINED)
#include <Modloader/app/structs/SchemaEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaEntity_DEFINED
struct SchemaEntity__Class;
struct SchemaEntity {
    struct SchemaEntity__Class* klass;
    MonitorData* monitor;
    struct SchemaEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaEntity_FWDDECL)
#define IL2CPP_STRUCT_SchemaEntity_FWDDECL
#include <Modloader/app/structs/SchemaEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaEntity_DEFINED) && !defined(IL2CPP_STRUCT_SchemaEntity_FWDDECL)
#include <Modloader/app/structs/SchemaEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
