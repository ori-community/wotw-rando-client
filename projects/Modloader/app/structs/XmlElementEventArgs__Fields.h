#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElementEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElementEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlElementEventArgs__Fields_DEFINED
struct Object;
struct XmlElement;
struct String;
struct __declspec(align(8)) XmlElementEventArgs__Fields {
    struct Object* o;
    struct XmlElement* elem;
    struct String* qnames;
    int32_t lineNumber;
    int32_t linePosition;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlElementEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlElementEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlElement.h>
#endif
#undef IL2CPP_STRUCT_XmlElementEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlElementEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/XmlElementEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElementEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
