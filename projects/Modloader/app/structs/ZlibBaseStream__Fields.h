#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZlibBaseStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZlibBaseStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibBaseStream__Fields_DEFINED)
#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/CompressionMode__Enum_1.h>
#include <Modloader/app/structs/CompressionStrategy__Enum.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/FlushType__Enum.h>
#include <Modloader/app/structs/Stream__Fields.h>
#include <Modloader/app/structs/ZlibBaseStream_StreamMode__Enum.h>
#include <Modloader/app/structs/ZlibStreamFlavor__Enum.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_ZlibBaseStream_StreamMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_FlushType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ZlibStreamFlavor__Enum_DEFINED) && defined(IL2CPP_STRUCT_CompressionMode__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_CompressionLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_CompressionStrategy__Enum_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_ZlibBaseStream__Fields_DEFINED
struct ZlibCodec;
struct Byte__Array;
struct Stream;
struct CRC32;
struct String;
struct ZlibBaseStream__Fields {
    struct Stream__Fields _;
    struct ZlibCodec* _z;
    ZlibBaseStream_StreamMode__Enum _streamMode;

    FlushType__Enum _flushMode;

    ZlibStreamFlavor__Enum _flavor;

    CompressionMode__Enum_1 _compressionMode;

    CompressionLevel__Enum _level;

    bool _leaveOpen;
    struct Byte__Array* _workingBuffer;
    int32_t _bufferSize;
    struct Byte__Array* _buf1;
    struct Stream* _stream;
    CompressionStrategy__Enum Strategy;

    struct CRC32* crc;
    struct String* _GzipFileName;
    struct String* _GzipComment;
    struct DateTime _GzipMtime;
    int32_t _gzipHeaderByteCount;
    bool nomoreinput;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZlibBaseStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_ZlibBaseStream__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CRC32.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ZlibCodec.h>
#endif
#undef IL2CPP_STRUCT_ZlibBaseStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZlibBaseStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ZlibBaseStream__Fields_FWDDECL)
#include <Modloader/app/structs/ZlibBaseStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZlibBaseStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
