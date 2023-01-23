#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaCollectionPreprocessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaCollectionPreprocessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor_DEFINED)
#include <Modloader/app/structs/SchemaCollectionPreprocessor__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaCollectionPreprocessor_DEFINED
struct SchemaCollectionPreprocessor__Class;
struct SchemaCollectionPreprocessor {
    struct SchemaCollectionPreprocessor__Class* klass;
    MonitorData* monitor;
    struct SchemaCollectionPreprocessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor_FWDDECL)
#define IL2CPP_STRUCT_SchemaCollectionPreprocessor_FWDDECL
#include <Modloader/app/structs/SchemaCollectionPreprocessor__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaCollectionPreprocessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor_DEFINED) && !defined(IL2CPP_STRUCT_SchemaCollectionPreprocessor_FWDDECL)
#include <Modloader/app/structs/SchemaCollectionPreprocessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaCollectionPreprocessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
