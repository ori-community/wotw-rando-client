#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GZipStream_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GZipStream_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipStream_1__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_GZipStream_1__Fields_DEFINED
struct ZlibBaseStream;
struct String;
struct GZipStream_1__Fields {
    struct Stream__Fields _;
    struct Nullable_1_DateTime_ LastModified;
    int32_t _headerByteCount;
    struct ZlibBaseStream* _baseStream;
    bool _disposed;
    bool _firstReadDone;
    struct String* _FileName;
    struct String* _Comment;
    int32_t _Crc32;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GZipStream_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_GZipStream_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ZlibBaseStream.h>
#endif
#undef IL2CPP_STRUCT_GZipStream_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipStream_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GZipStream_1__Fields_FWDDECL)
#include <Modloader/app/structs/GZipStream_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GZipStream_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
