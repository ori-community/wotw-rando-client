#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_DEFINED
struct XmlSchemaDatatype;
struct XmlSchemaParticle__Array;
struct XmlSchemaAttribute__Array;
struct Boolean__Array_1;
struct String__Array;
struct XmlSchemaValidator__StaticFields {
    struct XmlSchemaDatatype* dtQName;
    struct XmlSchemaDatatype* dtCDATA;
    struct XmlSchemaDatatype* dtStringArray;
    struct XmlSchemaParticle__Array* EmptyParticleArray;
    struct XmlSchemaAttribute__Array* EmptyAttributeArray;
    struct Boolean__Array_1* ValidStates;
    struct String__Array* MethodNames;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_FWDDECL
#include <Modloader/app/structs/Boolean__Array_1.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XmlSchemaAttribute__Array.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlSchemaParticle__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaValidator__StaticFields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaValidator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaValidator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
