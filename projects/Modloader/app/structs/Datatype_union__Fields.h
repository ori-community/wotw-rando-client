#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_union__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_union__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_union__Fields_DEFINED)
#include <Modloader/app/structs/Datatype_anySimpleType__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_anySimpleType__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_union__Fields_DEFINED
struct XmlSchemaSimpleType__Array;
struct Datatype_union__Fields {
    struct Datatype_anySimpleType__Fields _;
    struct XmlSchemaSimpleType__Array* types;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_union__Fields_FWDDECL)
#define IL2CPP_STRUCT_Datatype_union__Fields_FWDDECL
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#endif
#undef IL2CPP_STRUCT_Datatype_union__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_union__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_union__Fields_FWDDECL)
#include <Modloader/app/structs/Datatype_union__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_union__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
