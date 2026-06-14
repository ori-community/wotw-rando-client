#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListener__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListener__Fields_DEFINED)
#include <Modloader/app/structs/AuthenticationSchemes__Enum.h>
#if defined(IL2CPP_STRUCT_AuthenticationSchemes__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpListener__Fields_DEFINED
struct MonoTlsProvider;
struct MonoTlsSettings;
struct X509Certificate_1;
struct HttpListenerPrefixCollection;
struct AuthenticationSchemeSelector;
struct String;
struct Object;
struct Hashtable;
struct ArrayList;
struct ServiceNameStore;
struct ExtendedProtectionPolicy;
struct HttpListener_ExtendedProtectionSelector;
struct __declspec(align(8)) HttpListener__Fields {
    struct MonoTlsProvider* tlsProvider;
    struct MonoTlsSettings* tlsSettings;
    struct X509Certificate_1* certificate;
    AuthenticationSchemes__Enum auth_schemes;

    struct HttpListenerPrefixCollection* prefixes;
    struct AuthenticationSchemeSelector* auth_selector;
    struct String* realm;
    bool ignore_write_exceptions;
    bool unsafe_ntlm_auth;
    bool listening;
    bool disposed;
    struct Object* _internalLock;
    struct Hashtable* registry;
    struct ArrayList* ctx_queue;
    struct ArrayList* wait_queue;
    struct Hashtable* connections;
    struct ServiceNameStore* defaultServiceNames;
    struct ExtendedProtectionPolicy* extendedProtectionPolicy;
    struct HttpListener_ExtendedProtectionSelector* extendedProtectionSelectorDelegate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpListener__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpListener__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/AuthenticationSchemeSelector.h>
#include <Modloader/app/structs/ExtendedProtectionPolicy.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/HttpListenerPrefixCollection.h>
#include <Modloader/app/structs/HttpListener_ExtendedProtectionSelector.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServiceNameStore.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#endif
#undef IL2CPP_STRUCT_HttpListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListener__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpListener__Fields_FWDDECL)
#include <Modloader/app/structs/HttpListener__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListener__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
