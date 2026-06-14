#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonTextWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextWriter__Fields_DEFINED)
#include <Modloader/app/structs/JsonWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JsonWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonTextWriter__Fields_DEFINED
struct TextWriter;
struct Base64Encoder_1;
struct Boolean__Array;
struct Char__Array;
struct IArrayPool_1_System_Char_;
struct JsonTextWriter__Fields {
    struct JsonWriter__Fields _;
    bool _safeAsync;
    struct TextWriter* _writer;
    struct Base64Encoder_1* _base64Encoder;
    uint16_t _indentChar;
    int32_t _indentation;
    uint16_t _quoteChar;
    bool _quoteName;
    struct Boolean__Array* _charEscapeFlags;
    struct Char__Array* _writeBuffer;
    struct IArrayPool_1_System_Char_* _arrayPool;
    struct Char__Array* _indentChars;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonTextWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonTextWriter__Fields_FWDDECL
#include <Modloader/app/structs/Base64Encoder_1.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/IArrayPool_1_System_Char_.h>
#include <Modloader/app/structs/TextWriter.h>
#endif
#undef IL2CPP_STRUCT_JsonTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonTextWriter__Fields_FWDDECL)
#include <Modloader/app/structs/JsonTextWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonTextWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
