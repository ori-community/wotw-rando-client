#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebClient_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClient_DEFINED)
#include <Modloader/app/structs/WebClient__Fields.h>
#if defined(IL2CPP_STRUCT_WebClient__Fields_DEFINED)
#define IL2CPP_STRUCT_WebClient_DEFINED
struct WebClient__Class;
struct WebClient {
    struct WebClient__Class* klass;
    MonitorData* monitor;
    struct WebClient__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebClient_FWDDECL)
#define IL2CPP_STRUCT_WebClient_FWDDECL
#include <Modloader/app/structs/WebClient__Class.h>
#endif
#undef IL2CPP_STRUCT_WebClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClient_DEFINED) && !defined(IL2CPP_STRUCT_WebClient_FWDDECL)
#include <Modloader/app/structs/WebClient.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebClient.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
