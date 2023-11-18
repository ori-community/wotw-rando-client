#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslStreamBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslStreamBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStreamBase__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_SslStreamBase__Fields_DEFINED
struct Stream;
struct MemoryStream;
struct Context_1;
struct RecordProtocol;
struct Object;
struct ManualResetEvent;
struct Byte__Array;
struct SslStreamBase__Fields {
    struct Stream__Fields _;
    struct Stream* innerStream;
    struct MemoryStream* inputBuffer;
    struct Context_1* context;
    struct RecordProtocol* protocol;
    bool ownsStream;
    bool disposed;
    bool checkCertRevocationStatus;
    struct Object* negotiate;
    struct Object* read;
    struct Object* write;
    struct ManualResetEvent* negotiationComplete;
    struct Byte__Array* recbuf;
    struct MemoryStream* recordStream;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslStreamBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_SslStreamBase__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RecordProtocol.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_SslStreamBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslStreamBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SslStreamBase__Fields_FWDDECL)
#include <Modloader/app/structs/SslStreamBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslStreamBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
