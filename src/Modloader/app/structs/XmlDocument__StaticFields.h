#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDocument__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDocument__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocument__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XmlDocument__StaticFields_DEFINED
struct EmptyEnumerator;
struct IXmlSchemaInfo;
struct XmlDocument__StaticFields {
    struct EmptyEnumerator* EmptyEnumerator;
    struct IXmlSchemaInfo* NotKnownSchemaInfo;
    struct IXmlSchemaInfo* ValidSchemaInfo;
    struct IXmlSchemaInfo* InvalidSchemaInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlDocument__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XmlDocument__StaticFields_FWDDECL
#include <Modloader/app/structs/EmptyEnumerator.h>
#include <Modloader/app/structs/IXmlSchemaInfo.h>
#endif
#undef IL2CPP_STRUCT_XmlDocument__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDocument__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XmlDocument__StaticFields_FWDDECL)
#include <Modloader/app/structs/XmlDocument__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDocument__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
