#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_DEFINED)
#include <Modloader/app/structs/XmlTextReaderImpl_InitInputType__Enum.h>
#if defined(IL2CPP_STRUCT_XmlTextReaderImpl_InitInputType__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_DEFINED
struct Stream;
struct Byte__Array;
struct Uri;
struct String;
struct XmlResolver;
struct XmlParserContext;
struct TextReader;
struct __declspec(align(8)) XmlTextReaderImpl_LaterInitParam__Fields {
    bool useAsync;
    struct Stream* inputStream;
    struct Byte__Array* inputBytes;
    int32_t inputByteCount;
    struct Uri* inputbaseUri;
    struct String* inputUriStr;
    struct XmlResolver* inputUriResolver;
    struct XmlParserContext* inputContext;
    struct TextReader* inputTextReader;
    XmlTextReaderImpl_InitInputType__Enum initType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextReader.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlParserContext.h>
#include <Modloader/app/structs/XmlResolver.h>
#endif
#undef IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReaderImpl_LaterInitParam__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTextReaderImpl_LaterInitParam__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReaderImpl_LaterInitParam__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
