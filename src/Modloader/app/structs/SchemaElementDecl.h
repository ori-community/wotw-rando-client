#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaElementDecl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaElementDecl_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaElementDecl_DEFINED)
#include <Modloader/app/structs/SchemaElementDecl__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaElementDecl__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaElementDecl_DEFINED
struct SchemaElementDecl__Class;
struct SchemaElementDecl {
    struct SchemaElementDecl__Class* klass;
    MonitorData* monitor;
    struct SchemaElementDecl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaElementDecl_FWDDECL)
#define IL2CPP_STRUCT_SchemaElementDecl_FWDDECL
#include <Modloader/app/structs/SchemaElementDecl__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaElementDecl_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaElementDecl_DEFINED) && !defined(IL2CPP_STRUCT_SchemaElementDecl_FWDDECL)
#include <Modloader/app/structs/SchemaElementDecl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaElementDecl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
