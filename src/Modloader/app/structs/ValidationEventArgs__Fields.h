#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/XmlSeverityType__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSeverityType__Enum_DEFINED)
#define IL2CPP_STRUCT_ValidationEventArgs__Fields_DEFINED
struct XmlSchemaException;
struct __declspec(align(8)) ValidationEventArgs__Fields {
    struct XmlSchemaException* ex;
    XmlSeverityType__Enum severity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidationEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValidationEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/XmlSchemaException.h>
#endif
#undef IL2CPP_STRUCT_ValidationEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValidationEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/ValidationEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
