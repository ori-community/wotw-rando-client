#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_DEFINED
struct Object;
struct XmlAttribute;
struct String;
struct __declspec(align(8)) XmlAttributeEventArgs__Fields {
    struct Object* o;
    struct XmlAttribute* attr;
    struct String* qnames;
    int32_t lineNumber;
    int32_t linePosition;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlAttribute.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributeEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/XmlAttributeEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributeEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
