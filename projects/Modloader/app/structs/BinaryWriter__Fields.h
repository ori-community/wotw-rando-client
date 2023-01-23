#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryWriter__Fields_DEFINED
struct Stream;
struct Byte__Array;
struct Encoding;
struct Encoder;
struct Char__Array;
struct __declspec(align(8)) BinaryWriter__Fields {
    struct Stream* OutStream;
    struct Byte__Array* _buffer;
    struct Encoding* _encoding;
    struct Encoder* _encoder;
    bool _leaveOpen;
    struct Char__Array* _tmpOneCharBuffer;
    struct Byte__Array* _largeByteBuffer;
    int32_t _maxChars;
};
#endif
#if !defined(IL2CPP_STRUCT_BinaryWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryWriter__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_BinaryWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryWriter__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
