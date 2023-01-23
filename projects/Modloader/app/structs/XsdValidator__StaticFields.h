#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdValidator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdValidator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XsdValidator__StaticFields_DEFINED
struct XmlSchemaDatatype;
struct XsdValidator__StaticFields {
    struct XmlSchemaDatatype* dtCDATA;
    struct XmlSchemaDatatype* dtQName;
    struct XmlSchemaDatatype* dtStringArray;
};
#endif
#if !defined(IL2CPP_STRUCT_XsdValidator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XsdValidator__StaticFields_FWDDECL
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#endif
#undef IL2CPP_STRUCT_XsdValidator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XsdValidator__StaticFields_FWDDECL)
#include <Modloader/app/structs/XsdValidator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdValidator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
