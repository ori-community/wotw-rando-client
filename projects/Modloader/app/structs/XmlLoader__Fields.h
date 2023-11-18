#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlLoader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlLoader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlLoader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlLoader__Fields_DEFINED
struct XmlDocument;
struct XmlReader;
struct __declspec(align(8)) XmlLoader__Fields {
    struct XmlDocument* doc;
    struct XmlReader* reader;
    bool preserveWhitespace;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlLoader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlLoader__Fields_FWDDECL
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlReader.h>
#endif
#undef IL2CPP_STRUCT_XmlLoader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlLoader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlLoader__Fields_FWDDECL)
#include <Modloader/app/structs/XmlLoader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlLoader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
