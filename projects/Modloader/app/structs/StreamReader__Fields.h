#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamReader__Fields_DEFINED)
#include <Modloader/app/structs/TextReader__Fields.h>
#if defined(IL2CPP_STRUCT_TextReader__Fields_DEFINED)
#define IL2CPP_STRUCT_StreamReader__Fields_DEFINED
struct Stream;
struct Encoding;
struct Decoder;
struct Byte__Array;
struct Char__Array;
struct Task;
struct StreamReader__Fields {
    struct TextReader__Fields _;
    struct Stream* stream;
    struct Encoding* encoding;
    struct Decoder* decoder;
    struct Byte__Array* byteBuffer;
    struct Char__Array* charBuffer;
    struct Byte__Array* _preamble;
    int32_t charPos;
    int32_t charLen;
    int32_t byteLen;
    int32_t bytePos;
    int32_t _maxCharsPerBuffer;
    bool _detectEncoding;
    bool _checkPreamble;
    bool _isBlocked;
    bool _closable;
    struct Task* _asyncReadTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_StreamReader__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_StreamReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StreamReader__Fields_FWDDECL)
#include <Modloader/app/structs/StreamReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
