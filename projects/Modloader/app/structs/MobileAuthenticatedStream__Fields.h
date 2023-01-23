#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_DEFINED)
#include <Modloader/app/structs/AuthenticatedStream__Fields.h>
#if defined(IL2CPP_STRUCT_AuthenticatedStream__Fields_DEFINED)
#define IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_DEFINED
struct MobileTlsContext;
struct ExceptionDispatchInfo;
struct AsyncProtocolRequest;
struct BufferOffsetSize2;
struct Object;
struct SslStream;
struct MonoTlsSettings;
struct MonoTlsProvider;
struct MobileAuthenticatedStream__Fields {
    struct AuthenticatedStream__Fields _;
    struct MobileTlsContext* xobileTlsContext;
    struct ExceptionDispatchInfo* lastException;
    struct AsyncProtocolRequest* asyncHandshakeRequest;
    struct AsyncProtocolRequest* asyncReadRequest;
    struct AsyncProtocolRequest* asyncWriteRequest;
    struct BufferOffsetSize2* readBuffer;
    struct BufferOffsetSize2* writeBuffer;
    struct Object* ioLock;
    int32_t closeRequested;
    bool shutdown;
    struct SslStream* _SslStream_k__BackingField;
    struct MonoTlsSettings* _Settings_k__BackingField;
    struct MonoTlsProvider* _Provider_k__BackingField;
    int32_t ID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_FWDDECL
#include <Modloader/app/structs/AsyncProtocolRequest.h>
#include <Modloader/app/structs/BufferOffsetSize2.h>
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/MobileTlsContext.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SslStream.h>
#endif
#undef IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MobileAuthenticatedStream__Fields_FWDDECL)
#include <Modloader/app/structs/MobileAuthenticatedStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MobileAuthenticatedStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
