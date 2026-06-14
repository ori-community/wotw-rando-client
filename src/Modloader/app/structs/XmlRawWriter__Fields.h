#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlRawWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlRawWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlRawWriter__Fields_DEFINED)
#include <Modloader/app/structs/XmlWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlRawWriter__Fields_DEFINED
struct XmlRawWriterBase64Encoder;
struct IXmlNamespaceResolver;
struct XmlRawWriter__Fields {
    struct XmlWriter__Fields _;
    struct XmlRawWriterBase64Encoder* base64Encoder;
    struct IXmlNamespaceResolver* resolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlRawWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlRawWriter__Fields_FWDDECL
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/XmlRawWriterBase64Encoder.h>
#endif
#undef IL2CPP_STRUCT_XmlRawWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlRawWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlRawWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlRawWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlRawWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
