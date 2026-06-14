#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlName__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlName__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlName__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlName__Fields_DEFINED
struct String;
struct XmlDocument;
struct XmlName;
struct __declspec(align(8)) XmlName__Fields {
    struct String* prefix;
    struct String* localName;
    struct String* ns;
    struct String* name;
    int32_t hashCode;
    struct XmlDocument* ownerDoc;
    struct XmlName* next;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlName__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlName__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlName.h>
#endif
#undef IL2CPP_STRUCT_XmlName__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlName__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlName__Fields_FWDDECL)
#include <Modloader/app/structs/XmlName__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlName__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
