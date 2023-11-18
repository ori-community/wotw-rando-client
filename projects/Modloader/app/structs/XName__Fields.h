#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XName__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XName__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XName__Fields_DEFINED)
#define IL2CPP_STRUCT_XName__Fields_DEFINED
struct XNamespace;
struct String;
struct __declspec(align(8)) XName__Fields {
    struct XNamespace* ns;
    struct String* localName;
    int32_t hashCode;
};
#endif
#if !defined(IL2CPP_STRUCT_XName__Fields_FWDDECL)
#define IL2CPP_STRUCT_XName__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XNamespace.h>
#endif
#undef IL2CPP_STRUCT_XName__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XName__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XName__Fields_FWDDECL)
#include <Modloader/app/structs/XName__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XName__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
