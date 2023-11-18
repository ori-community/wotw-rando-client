#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaAttDef_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaAttDef_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaAttDef_DEFINED)
#include <Modloader/app/structs/SchemaAttDef__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaAttDef__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaAttDef_DEFINED
struct SchemaAttDef__Class;
struct SchemaAttDef {
    struct SchemaAttDef__Class* klass;
    MonitorData* monitor;
    struct SchemaAttDef__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaAttDef_FWDDECL)
#define IL2CPP_STRUCT_SchemaAttDef_FWDDECL
#include <Modloader/app/structs/SchemaAttDef__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaAttDef_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaAttDef_DEFINED) && !defined(IL2CPP_STRUCT_SchemaAttDef_FWDDECL)
#include <Modloader/app/structs/SchemaAttDef.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaAttDef.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
