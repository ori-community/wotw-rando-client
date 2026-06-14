#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_DEFINED)
#include <Modloader/app/structs/NewLineHandling__Enum.h>
#include <Modloader/app/structs/XmlCharType.h>
#include <Modloader/app/structs/XmlOutputMethod__Enum.h>
#include <Modloader/app/structs/XmlRawWriter__Fields.h>
#include <Modloader/app/structs/XmlStandalone__Enum.h>
#if defined(IL2CPP_STRUCT_XmlRawWriter__Fields_DEFINED) && defined(IL2CPP_STRUCT_XmlCharType_DEFINED) && defined(IL2CPP_STRUCT_NewLineHandling__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlStandalone__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlOutputMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_DEFINED
struct Byte__Array;
struct Stream;
struct Encoding;
struct Char__Array;
struct Encoder;
struct TextWriter;
struct Int32__Array;
struct CharEntityEncoderFallback;
struct String;
struct XmlEncodedRawTextWriter__Fields {
    struct XmlRawWriter__Fields _;
    bool useAsync;
    struct Byte__Array* bufBytes;
    struct Stream* stream;
    struct Encoding* encoding;
    struct XmlCharType xmlCharType;
    int32_t bufPos;
    int32_t textPos;
    int32_t contentPos;
    int32_t cdataPos;
    int32_t attrEndPos;
    int32_t bufLen;
    bool writeToNull;
    bool hadDoubleBracket;
    bool inAttributeValue;
    int32_t bufBytesUsed;
    struct Char__Array* bufChars;
    struct Encoder* encoder;
    struct TextWriter* writer;
    bool trackTextContent;
    bool inTextContent;
    int32_t lastMarkPos;
    struct Int32__Array* textContentMarks;
    struct CharEntityEncoderFallback* charEntityFallback;
    NewLineHandling__Enum newLineHandling;

    bool closeOutput;
    bool omitXmlDeclaration;
    struct String* newLineChars;
    bool checkCharacters;
    XmlStandalone__Enum standalone;

    XmlOutputMethod__Enum outputMethod;

    bool autoXmlDeclaration;
    bool mergeCDataSections;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CharEntityEncoderFallback.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#endif
#undef IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlEncodedRawTextWriter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlEncodedRawTextWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEncodedRawTextWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
