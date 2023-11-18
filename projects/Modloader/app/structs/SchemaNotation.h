#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaNotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaNotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaNotation_DEFINED)
#include <Modloader/app/structs/SchemaNotation__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaNotation__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaNotation_DEFINED
struct SchemaNotation__Class;
struct SchemaNotation {
    struct SchemaNotation__Class* klass;
    MonitorData* monitor;
    struct SchemaNotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaNotation_FWDDECL)
#define IL2CPP_STRUCT_SchemaNotation_FWDDECL
#include <Modloader/app/structs/SchemaNotation__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaNotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaNotation_DEFINED) && !defined(IL2CPP_STRUCT_SchemaNotation_FWDDECL)
#include <Modloader/app/structs/SchemaNotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaNotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
