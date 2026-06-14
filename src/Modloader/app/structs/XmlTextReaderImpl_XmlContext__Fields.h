#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_DEFINED)
#include <Modloader/app/structs/XmlSpace__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSpace__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_DEFINED
struct String;
struct XmlTextReaderImpl_XmlContext;
struct __declspec(align(8)) XmlTextReaderImpl_XmlContext__Fields {
    XmlSpace__Enum xmlSpace;

    struct String* xmlLang;
    struct String* defaultNamespace;
    struct XmlTextReaderImpl_XmlContext* previousContext;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlTextReaderImpl_XmlContext.h>
#endif
#undef IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReaderImpl_XmlContext__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTextReaderImpl_XmlContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReaderImpl_XmlContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
