#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerPrefixCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerPrefixCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerPrefixCollection_DEFINED)
#include <Modloader/app/structs/HttpListenerPrefixCollection__Fields.h>
#if defined(IL2CPP_STRUCT_HttpListenerPrefixCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerPrefixCollection_DEFINED
struct HttpListenerPrefixCollection__Class;
struct HttpListenerPrefixCollection {
    struct HttpListenerPrefixCollection__Class* klass;
    MonitorData* monitor;
    struct HttpListenerPrefixCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerPrefixCollection_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerPrefixCollection_FWDDECL
#include <Modloader/app/structs/HttpListenerPrefixCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerPrefixCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerPrefixCollection_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerPrefixCollection_FWDDECL)
#include <Modloader/app/structs/HttpListenerPrefixCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerPrefixCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
