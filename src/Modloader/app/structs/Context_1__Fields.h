#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Context_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Context_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Context_1__Fields_DEFINED)
#include <Modloader/app/structs/HandshakeState__Enum.h>
#include <Modloader/app/structs/HandshakeType__Enum.h>
#include <Modloader/app/structs/SecurityCompressionType__Enum.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum_1.h>
#if defined(IL2CPP_STRUCT_SecurityProtocolType__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_SecurityCompressionType__Enum_DEFINED) && defined(IL2CPP_STRUCT_HandshakeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_HandshakeState__Enum_DEFINED)
#define IL2CPP_STRUCT_Context_1__Fields_DEFINED
struct Byte__Array;
struct TlsServerSettings;
struct TlsClientSettings;
struct SecurityParameters;
struct CipherSuiteCollection;
struct TlsStream;
struct RandomNumberGenerator;
struct RecordProtocol;
struct __declspec(align(8)) Context_1__Fields {
    SecurityProtocolType__Enum_1 securityProtocol;

    struct Byte__Array* sessionId;
    SecurityCompressionType__Enum compressionMethod;

    struct TlsServerSettings* serverSettings;
    struct TlsClientSettings* clientSettings;
    struct SecurityParameters* current;
    struct SecurityParameters* negotiating;
    struct SecurityParameters* read;
    struct SecurityParameters* write;
    struct CipherSuiteCollection* supportedCiphers;
    HandshakeType__Enum lastHandshakeMsg;

    HandshakeState__Enum handshakeState;

    bool abbreviatedHandshake;
    bool receivedConnectionEnd;
    bool sentConnectionEnd;
    bool protocolNegotiated;
    uint64_t writeSequenceNumber;
    uint64_t readSequenceNumber;
    struct Byte__Array* clientRandom;
    struct Byte__Array* serverRandom;
    struct Byte__Array* randomCS;
    struct Byte__Array* randomSC;
    struct Byte__Array* masterSecret;
    struct Byte__Array* clientWriteKey;
    struct Byte__Array* serverWriteKey;
    struct Byte__Array* clientWriteIV;
    struct Byte__Array* serverWriteIV;
    struct TlsStream* handshakeMessages;
    struct RandomNumberGenerator* random;
    struct RecordProtocol* recordProtocol;
    bool _ChangeCipherSpecDone_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Context_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Context_1__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherSuiteCollection.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/RecordProtocol.h>
#include <Modloader/app/structs/SecurityParameters.h>
#include <Modloader/app/structs/TlsClientSettings.h>
#include <Modloader/app/structs/TlsServerSettings.h>
#include <Modloader/app/structs/TlsStream.h>
#endif
#undef IL2CPP_STRUCT_Context_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Context_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Context_1__Fields_FWDDECL)
#include <Modloader/app/structs/Context_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Context_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
