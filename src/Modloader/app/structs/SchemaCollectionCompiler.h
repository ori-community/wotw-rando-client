#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaCollectionCompiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaCollectionCompiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaCollectionCompiler_DEFINED)
#include <Modloader/app/structs/SchemaCollectionCompiler__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaCollectionCompiler__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaCollectionCompiler_DEFINED
struct SchemaCollectionCompiler__Class;
struct SchemaCollectionCompiler {
    struct SchemaCollectionCompiler__Class* klass;
    MonitorData* monitor;
    struct SchemaCollectionCompiler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaCollectionCompiler_FWDDECL)
#define IL2CPP_STRUCT_SchemaCollectionCompiler_FWDDECL
#include <Modloader/app/structs/SchemaCollectionCompiler__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaCollectionCompiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaCollectionCompiler_DEFINED) && !defined(IL2CPP_STRUCT_SchemaCollectionCompiler_FWDDECL)
#include <Modloader/app/structs/SchemaCollectionCompiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaCollectionCompiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
