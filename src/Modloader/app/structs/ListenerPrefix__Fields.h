#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerPrefix__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerPrefix__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerPrefix__Fields_DEFINED)
#define IL2CPP_STRUCT_ListenerPrefix__Fields_DEFINED
struct String;
struct IPAddress__Array;
struct HttpListener;
struct __declspec(align(8)) ListenerPrefix__Fields {
    struct String* original;
    struct String* host;
    uint16_t port;
    struct String* path;
    bool secure;
    struct IPAddress__Array* addresses;
    struct HttpListener* Listener;
};
#endif
#if !defined(IL2CPP_STRUCT_ListenerPrefix__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListenerPrefix__Fields_FWDDECL
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ListenerPrefix__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerPrefix__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListenerPrefix__Fields_FWDDECL)
#include <Modloader/app/structs/ListenerPrefix__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerPrefix__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
