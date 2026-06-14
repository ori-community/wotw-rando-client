#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChainValidationHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChainValidationHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainValidationHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_ChainValidationHelper__Fields_DEFINED
struct Object;
struct MonoTlsSettings;
struct MonoTlsProvider;
struct ServerCertValidationCallback;
struct LocalCertSelectionCallback;
struct ServerCertValidationCallbackWrapper;
struct MonoTlsStream;
struct HttpWebRequest;
struct __declspec(align(8)) ChainValidationHelper__Fields {
    struct Object* sender;
    struct MonoTlsSettings* settings;
    struct MonoTlsProvider* provider;
    struct ServerCertValidationCallback* certValidationCallback;
    struct LocalCertSelectionCallback* certSelectionCallback;
    struct ServerCertValidationCallbackWrapper* callbackWrapper;
    struct MonoTlsStream* tlsStream;
    struct HttpWebRequest* request;
};
#endif
#if !defined(IL2CPP_STRUCT_ChainValidationHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChainValidationHelper__Fields_FWDDECL
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/LocalCertSelectionCallback.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/MonoTlsStream.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServerCertValidationCallback.h>
#include <Modloader/app/structs/ServerCertValidationCallbackWrapper.h>
#endif
#undef IL2CPP_STRUCT_ChainValidationHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainValidationHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChainValidationHelper__Fields_FWDDECL)
#include <Modloader/app/structs/ChainValidationHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChainValidationHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
