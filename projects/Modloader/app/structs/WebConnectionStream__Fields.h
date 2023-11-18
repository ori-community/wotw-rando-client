#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnectionStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnectionStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionStream__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_WebConnectionStream__Fields_DEFINED
struct WebConnection;
struct HttpWebRequest;
struct Byte__Array;
struct ManualResetEvent;
struct MemoryStream;
struct Object;
struct AsyncCallback;
struct WebConnectionStream__Fields {
    struct Stream__Fields _;
    bool isRead;
    struct WebConnection* cnc;
    struct HttpWebRequest* request;
    struct Byte__Array* readBuffer;
    int32_t readBufferOffset;
    int32_t readBufferSize;
    int32_t stream_length;
    int64_t contentLength;
    int64_t totalRead;
    int64_t totalWritten;
    bool nextReadCalled;
    int32_t pendingReads;
    int32_t pendingWrites;
    struct ManualResetEvent* pending;
    bool allowBuffering;
    bool sendChunked;
    struct MemoryStream* writeBuffer;
    bool requestWritten;
    struct Byte__Array* headers;
    bool disposed;
    bool headersSent;
    struct Object* locker;
    bool initRead;
    bool read_eof;
    bool complete_request_written;
    int32_t read_timeout;
    int32_t write_timeout;
    struct AsyncCallback* cb_wrapper;
    bool IgnoreIOErrors;
    bool _GetResponseOnClose_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnectionStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebConnectionStream__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WebConnection.h>
#endif
#undef IL2CPP_STRUCT_WebConnectionStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebConnectionStream__Fields_FWDDECL)
#include <Modloader/app/structs/WebConnectionStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnectionStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
