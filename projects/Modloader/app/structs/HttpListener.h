#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListener_DEFINED)
#include <Modloader/app/structs/HttpListener__Fields.h>
#if defined(IL2CPP_STRUCT_HttpListener__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListener_DEFINED
struct HttpListener__Class;
struct HttpListener {
    struct HttpListener__Class* klass;
    MonitorData* monitor;
    struct HttpListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpListener_FWDDECL)
#define IL2CPP_STRUCT_HttpListener_FWDDECL
#include <Modloader/app/structs/HttpListener__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListener_DEFINED) && !defined(IL2CPP_STRUCT_HttpListener_FWDDECL)
#include <Modloader/app/structs/HttpListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
