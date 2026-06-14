#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_DEFINED)
#define IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_DEFINED
struct WebClient;
struct Stream;
struct Byte__Array;
struct AsyncOperation;
struct WebRequest;
struct CompletionDelegate;
struct ScatterGatherBuffers;
struct WebClient_ProgressData;
struct __declspec(align(8)) WebClient_DownloadBitsState__Fields {
    struct WebClient* WebClient;
    struct Stream* WriteStream;
    struct Byte__Array* InnerBuffer;
    struct AsyncOperation* AsyncOp;
    struct WebRequest* Request;
    struct CompletionDelegate* CompletionDelegate;
    struct Stream* ReadStream;
    struct ScatterGatherBuffers* SgBuffers;
    int64_t ContentLength;
    int64_t Length;
    struct WebClient_ProgressData* Progress;
};
#endif
#if !defined(IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_FWDDECL
#include <Modloader/app/structs/AsyncOperation.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompletionDelegate.h>
#include <Modloader/app/structs/ScatterGatherBuffers.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/WebClient.h>
#include <Modloader/app/structs/WebClient_ProgressData.h>
#include <Modloader/app/structs/WebRequest.h>
#endif
#undef IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebClient_DownloadBitsState__Fields_FWDDECL)
#include <Modloader/app/structs/WebClient_DownloadBitsState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebClient_DownloadBitsState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
