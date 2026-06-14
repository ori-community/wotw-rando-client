#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndPointListener__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndPointListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPointListener__Fields_DEFINED)
#define IL2CPP_STRUCT_EndPointListener__Fields_DEFINED
struct HttpListener;
struct IPEndPoint;
struct Socket;
struct Hashtable;
struct ArrayList;
struct X509Certificate_1;
struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_;
struct __declspec(align(8)) EndPointListener__Fields {
    struct HttpListener* listener;
    struct IPEndPoint* endpoint;
    struct Socket* sock;
    struct Hashtable* prefixes;
    struct ArrayList* unhandled;
    struct ArrayList* all;
    struct X509Certificate_1* cert;
    bool secure;
    struct Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_* unregistered;
};
#endif
#if !defined(IL2CPP_STRUCT_EndPointListener__Fields_FWDDECL)
#define IL2CPP_STRUCT_EndPointListener__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Dictionary_2_System_Net_HttpConnection_System_Net_HttpConnection_.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#endif
#undef IL2CPP_STRUCT_EndPointListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPointListener__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EndPointListener__Fields_FWDDECL)
#include <Modloader/app/structs/EndPointListener__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndPointListener__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
