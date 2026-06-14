#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryReader__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryReader__Fields_DEFINED
struct Stream;
struct Byte__Array;
struct Decoder;
struct Char__Array;
struct __declspec(align(8)) BinaryReader__Fields {
    struct Stream* m_stream;
    struct Byte__Array* m_buffer;
    struct Decoder* m_decoder;
    struct Byte__Array* m_charBytes;
    struct Char__Array* m_singleChar;
    struct Char__Array* m_charBuffer;
    int32_t m_maxCharsSize;
    bool m_2BytesPerChar;
    bool m_isMemoryStream;
    bool m_leaveOpen;
};
#endif
#if !defined(IL2CPP_STRUCT_BinaryReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryReader__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_BinaryReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryReader__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
