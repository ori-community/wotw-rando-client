#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceRequest_DEFINED)
#include <Modloader/app/structs/ResourceRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ResourceRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ResourceRequest_DEFINED
struct ResourceRequest__Class;
struct ResourceRequest {
    struct ResourceRequest__Class* klass;
    MonitorData* monitor;
    struct ResourceRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResourceRequest_FWDDECL)
#define IL2CPP_STRUCT_ResourceRequest_FWDDECL
#include <Modloader/app/structs/ResourceRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ResourceRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceRequest_DEFINED) && !defined(IL2CPP_STRUCT_ResourceRequest_FWDDECL)
#include <Modloader/app/structs/ResourceRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
