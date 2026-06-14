#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_DEFINED
struct WebRequest;
struct Stream;
struct WebClient;
struct WebClient_WebClientWriteStream__Fields {
    struct Stream__Fields _;
    struct WebRequest* m_request;
    struct Stream* m_stream;
    struct WebClient* m_WebClient;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_FWDDECL
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/WebClient.h>
#include <Modloader/app/structs/WebRequest.h>
#endif
#undef IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebClient_WebClientWriteStream__Fields_FWDDECL)
#include <Modloader/app/structs/WebClient_WebClientWriteStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebClient_WebClientWriteStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
