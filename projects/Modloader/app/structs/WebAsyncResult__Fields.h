#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebAsyncResult__Fields_DEFINED)
#include <Modloader/app/structs/SimpleAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_WebAsyncResult__Fields_DEFINED
struct IAsyncResult;
struct HttpWebResponse;
struct Stream;
struct Byte__Array;
struct HttpWebRequest;
struct WebAsyncResult__Fields {
    struct SimpleAsyncResult__Fields _;
    int32_t nbytes;
    struct IAsyncResult* innerAsyncResult;
    struct HttpWebResponse* response;
    struct Stream* writeStream;
    struct Byte__Array* buffer;
    int32_t offset;
    int32_t size;
    bool EndCalled;
    bool AsyncWriteAll;
    struct HttpWebRequest* AsyncObject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/HttpWebResponse.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_WebAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/WebAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
