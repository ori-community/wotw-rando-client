#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTextReader__Fields_DEFINED
struct XmlTextReaderImpl;
struct __declspec(align(8)) XmlTextReader__Fields {
    struct XmlTextReaderImpl* impl;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReader__Fields_FWDDECL
#include <Modloader/app/structs/XmlTextReaderImpl.h>
#endif
#undef IL2CPP_STRUCT_XmlTextReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReader__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTextReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
