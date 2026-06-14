#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpContent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContent_DEFINED)
#include <Modloader/app/structs/HttpContent__Fields.h>
#if defined(IL2CPP_STRUCT_HttpContent__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpContent_DEFINED
struct HttpContent__Class;
struct HttpContent {
    struct HttpContent__Class* klass;
    MonitorData* monitor;
    struct HttpContent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpContent_FWDDECL)
#define IL2CPP_STRUCT_HttpContent_FWDDECL
#include <Modloader/app/structs/HttpContent__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpContent_DEFINED) && !defined(IL2CPP_STRUCT_HttpContent_FWDDECL)
#include <Modloader/app/structs/HttpContent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpContent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
