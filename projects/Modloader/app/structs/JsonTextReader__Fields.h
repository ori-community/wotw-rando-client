#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonTextReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonTextReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextReader__Fields_DEFINED)
#include <Modloader/app/structs/JsonReader__Fields.h>
#include <Modloader/app/structs/StringBuffer.h>
#include <Modloader/app/structs/StringReference.h>
#if defined(IL2CPP_STRUCT_JsonReader__Fields_DEFINED) && defined(IL2CPP_STRUCT_StringBuffer_DEFINED) && defined(IL2CPP_STRUCT_StringReference_DEFINED)
#define IL2CPP_STRUCT_JsonTextReader__Fields_DEFINED
struct TextReader;
struct Char__Array;
struct IArrayPool_1_System_Char_;
struct JsonNameTable;
struct JsonTextReader__Fields {
    struct JsonReader__Fields _;
    struct TextReader* _reader;
    struct Char__Array* _chars;
    int32_t _charsUsed;
    int32_t _charPos;
    int32_t _lineStartPos;
    int32_t _lineNumber;
    bool _isEndOfFile;
    struct StringBuffer _stringBuffer;
    struct StringReference _stringReference;
    struct IArrayPool_1_System_Char_* _arrayPool;
    struct JsonNameTable* _PropertyNameTable_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonTextReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonTextReader__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/IArrayPool_1_System_Char_.h>
#include <Modloader/app/structs/JsonNameTable.h>
#include <Modloader/app/structs/TextReader.h>
#endif
#undef IL2CPP_STRUCT_JsonTextReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonTextReader__Fields_FWDDECL)
#include <Modloader/app/structs/JsonTextReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonTextReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
