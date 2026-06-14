#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpHeaders_HeaderBucket_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpHeaders_HeaderBucket_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket_DEFINED)
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Fields.h>
#if defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpHeaders_HeaderBucket_DEFINED
struct HttpHeaders_HeaderBucket__Class;
struct HttpHeaders_HeaderBucket {
    struct HttpHeaders_HeaderBucket__Class* klass;
    MonitorData* monitor;
    struct HttpHeaders_HeaderBucket__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket_FWDDECL)
#define IL2CPP_STRUCT_HttpHeaders_HeaderBucket_FWDDECL
#include <Modloader/app/structs/HttpHeaders_HeaderBucket__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpHeaders_HeaderBucket_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket_DEFINED) && !defined(IL2CPP_STRUCT_HttpHeaders_HeaderBucket_FWDDECL)
#include <Modloader/app/structs/HttpHeaders_HeaderBucket.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpHeaders_HeaderBucket.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
