#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) XmlAnyElementAttribute__Fields {
    struct String* elementName;
    struct String* ns;
    int32_t order;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlAnyElementAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/XmlAnyElementAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAnyElementAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
