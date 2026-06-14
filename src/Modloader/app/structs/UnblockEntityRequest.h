#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnblockEntityRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnblockEntityRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnblockEntityRequest_DEFINED)
#include <Modloader/app/structs/UnblockEntityRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UnblockEntityRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UnblockEntityRequest_DEFINED
struct UnblockEntityRequest__Class;
struct UnblockEntityRequest {
    struct UnblockEntityRequest__Class* klass;
    MonitorData* monitor;
    struct UnblockEntityRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnblockEntityRequest_FWDDECL)
#define IL2CPP_STRUCT_UnblockEntityRequest_FWDDECL
#include <Modloader/app/structs/UnblockEntityRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UnblockEntityRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnblockEntityRequest_DEFINED) && !defined(IL2CPP_STRUCT_UnblockEntityRequest_FWDDECL)
#include <Modloader/app/structs/UnblockEntityRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnblockEntityRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
