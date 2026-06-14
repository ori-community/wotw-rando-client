#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateStream_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateStream_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStream_1__Fields_DEFINED)
#include <Modloader/app/structs/CompressionMode__Enum_2.h>
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED) && defined(IL2CPP_STRUCT_CompressionMode__Enum_2_DEFINED)
#define IL2CPP_STRUCT_DeflateStream_1__Fields_DEFINED
struct Stream;
struct Inflater;
struct IDeflater;
struct Byte__Array;
struct AsyncCallback;
struct DeflateStream_AsyncWriteDelegate;
struct IFileFormatWriter;
struct DeflateStream_1__Fields {
    struct Stream__Fields _;
    struct Stream* _stream;
    CompressionMode__Enum_2 _mode;

    bool _leaveOpen;
    struct Inflater* inflater;
    struct IDeflater* deflater;
    struct Byte__Array* buffer;
    int32_t asyncOperations;
    struct AsyncCallback* m_CallBack;
    struct DeflateStream_AsyncWriteDelegate* m_AsyncWriterDelegate;
    struct IFileFormatWriter* formatWriter;
    bool wroteHeader;
    bool wroteBytes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateStream_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeflateStream_1__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DeflateStream_AsyncWriteDelegate.h>
#include <Modloader/app/structs/IDeflater.h>
#include <Modloader/app/structs/IFileFormatWriter.h>
#include <Modloader/app/structs/Inflater.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_DeflateStream_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateStream_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeflateStream_1__Fields_FWDDECL)
#include <Modloader/app/structs/DeflateStream_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateStream_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
