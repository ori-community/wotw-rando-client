#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpVersion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpVersion_DEFINED)
#define IL2CPP_STRUCT_HttpVersion_DEFINED
struct HttpVersion__Class;
struct HttpVersion {
    struct HttpVersion__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpVersion_FWDDECL)
#define IL2CPP_STRUCT_HttpVersion_FWDDECL
#include <Modloader/app/structs/HttpVersion__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpVersion_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpVersion_DEFINED) && !defined(IL2CPP_STRUCT_HttpVersion_FWDDECL)
#include <Modloader/app/structs/HttpVersion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpVersion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
