#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_DEFINED)
#define IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_DEFINED
struct Char__Array;
struct Byte__Array;
struct Encoding;
struct __declspec(align(8)) WebUtility_UrlDecoder__Fields {
    int32_t _bufferSize;
    int32_t _numChars;
    struct Char__Array* _charBuffer;
    int32_t _numBytes;
    struct Byte__Array* _byteBuffer;
    struct Encoding* _encoding;
};
#endif
#if !defined(IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#endif
#undef IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebUtility_UrlDecoder__Fields_FWDDECL)
#include <Modloader/app/structs/WebUtility_UrlDecoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebUtility_UrlDecoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
