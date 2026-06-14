#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpRequestMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpRequestMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestMessage_DEFINED)
#include <Modloader/app/structs/HttpRequestMessage__Fields.h>
#if defined(IL2CPP_STRUCT_HttpRequestMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpRequestMessage_DEFINED
struct HttpRequestMessage__Class;
struct HttpRequestMessage {
    struct HttpRequestMessage__Class* klass;
    MonitorData* monitor;
    struct HttpRequestMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpRequestMessage_FWDDECL)
#define IL2CPP_STRUCT_HttpRequestMessage_FWDDECL
#include <Modloader/app/structs/HttpRequestMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpRequestMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpRequestMessage_DEFINED) && !defined(IL2CPP_STRUCT_HttpRequestMessage_FWDDECL)
#include <Modloader/app/structs/HttpRequestMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpRequestMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
