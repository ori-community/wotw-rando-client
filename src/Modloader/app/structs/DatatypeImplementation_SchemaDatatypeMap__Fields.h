#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_DEFINED)
#define IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_DEFINED
struct String;
struct DatatypeImplementation;
struct __declspec(align(8)) DatatypeImplementation_SchemaDatatypeMap__Fields {
    struct String* name;
    struct DatatypeImplementation* type;
    int32_t parentIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_FWDDECL
#include <Modloader/app/structs/DatatypeImplementation.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DatatypeImplementation_SchemaDatatypeMap__Fields_FWDDECL)
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatatypeImplementation_SchemaDatatypeMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
