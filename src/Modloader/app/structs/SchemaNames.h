#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaNames_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaNames_DEFINED)
#include <Modloader/app/structs/SchemaNames__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaNames__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaNames_DEFINED
struct SchemaNames__Class;
struct SchemaNames {
    struct SchemaNames__Class* klass;
    MonitorData* monitor;
    struct SchemaNames__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaNames_FWDDECL)
#define IL2CPP_STRUCT_SchemaNames_FWDDECL
#include <Modloader/app/structs/SchemaNames__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaNames_DEFINED) && !defined(IL2CPP_STRUCT_SchemaNames_FWDDECL)
#include <Modloader/app/structs/SchemaNames.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaNames.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
