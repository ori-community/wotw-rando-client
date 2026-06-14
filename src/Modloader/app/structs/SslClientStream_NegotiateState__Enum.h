#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_DEFINED)
#define IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_DEFINED
enum class SslClientStream_NegotiateState__Enum : int32_t {
    SentClientHello = 0x00000000,
    ReceiveClientHelloResponse = 0x00000001,
    SentCipherSpec = 0x00000002,
    ReceiveCipherSpecResponse = 0x00000003,
    SentKeyExchange = 0x00000004,
    ReceiveFinishResponse = 0x00000005,
    SentFinished = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_FWDDECL)
#define IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SslClientStream_NegotiateState__Enum_FWDDECL)
#include <Modloader/app/structs/SslClientStream_NegotiateState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslClientStream_NegotiateState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
