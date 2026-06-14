#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalService_CommonArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalService_CommonArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_CommonArgs_DEFINED)
#define IL2CPP_STRUCT_XalService_CommonArgs_DEFINED
struct String;
struct XalService_CommonArgs {
    uint32_t Flags;
    uint32_t TitleId;
    struct String* ClientId;
    struct String* Sandbox;
    struct String* RedirectUri;
    struct String* CorrelationVector;
    bool UseRemoteConnect;
    bool DisableDiagnosticTelemetry;
    void* AndroidAppContext;
};
#endif
#if !defined(IL2CPP_STRUCT_XalService_CommonArgs_FWDDECL)
#define IL2CPP_STRUCT_XalService_CommonArgs_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XalService_CommonArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_CommonArgs_DEFINED) && !defined(IL2CPP_STRUCT_XalService_CommonArgs_FWDDECL)
#include <Modloader/app/structs/XalService_CommonArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalService_CommonArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
