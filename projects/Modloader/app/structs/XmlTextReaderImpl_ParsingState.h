#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_DEFINED)
#define IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_DEFINED
struct Char__Array;
struct Encoding;
struct Stream;
struct Decoder;
struct Byte__Array;
struct TextReader;
struct String;
struct Uri;
struct IDtdEntityInfo;
struct XmlTextReaderImpl_ParsingState {
    struct Char__Array* chars;
    int32_t charPos;
    int32_t charsUsed;
    struct Encoding* encoding;
    bool appendMode;
    struct Stream* stream;
    struct Decoder* decoder;
    struct Byte__Array* bytes;
    int32_t bytePos;
    int32_t bytesUsed;
    struct TextReader* textReader;
    int32_t lineNo;
    int32_t lineStartPos;
    struct String* baseUriStr;
    struct Uri* baseUri;
    bool isEof;
    bool isStreamEof;
    struct IDtdEntityInfo* entity;
    int32_t entityId;
    bool eolNormalized;
    bool entityResolvedManually;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_FWDDECL)
#define IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/IDtdEntityInfo.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextReader.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextReaderImpl_ParsingState_FWDDECL)
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextReaderImpl_ParsingState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
