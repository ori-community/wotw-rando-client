#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpWebRequestElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpWebRequestElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebRequestElement_DEFINED)
#define IL2CPP_STRUCT_HttpWebRequestElement_DEFINED
struct HttpWebRequestElement__Class;
struct HttpWebRequestElement {
    struct HttpWebRequestElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpWebRequestElement_FWDDECL)
#define IL2CPP_STRUCT_HttpWebRequestElement_FWDDECL
#include <Modloader/app/structs/HttpWebRequestElement__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpWebRequestElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebRequestElement_DEFINED) && !defined(IL2CPP_STRUCT_HttpWebRequestElement_FWDDECL)
#include <Modloader/app/structs/HttpWebRequestElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpWebRequestElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
