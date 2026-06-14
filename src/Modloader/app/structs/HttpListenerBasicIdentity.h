#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerBasicIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerBasicIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerBasicIdentity_DEFINED)
#include <Modloader/app/structs/HttpListenerBasicIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_HttpListenerBasicIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerBasicIdentity_DEFINED
struct HttpListenerBasicIdentity__Class;
struct HttpListenerBasicIdentity {
    struct HttpListenerBasicIdentity__Class* klass;
    MonitorData* monitor;
    struct HttpListenerBasicIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerBasicIdentity_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerBasicIdentity_FWDDECL
#include <Modloader/app/structs/HttpListenerBasicIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerBasicIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerBasicIdentity_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerBasicIdentity_FWDDECL)
#include <Modloader/app/structs/HttpListenerBasicIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerBasicIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
