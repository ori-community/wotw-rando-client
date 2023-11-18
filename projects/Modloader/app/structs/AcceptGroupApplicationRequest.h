#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcceptGroupApplicationRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcceptGroupApplicationRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcceptGroupApplicationRequest_DEFINED)
#include <Modloader/app/structs/AcceptGroupApplicationRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AcceptGroupApplicationRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AcceptGroupApplicationRequest_DEFINED
struct AcceptGroupApplicationRequest__Class;
struct AcceptGroupApplicationRequest {
    struct AcceptGroupApplicationRequest__Class* klass;
    MonitorData* monitor;
    struct AcceptGroupApplicationRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcceptGroupApplicationRequest_FWDDECL)
#define IL2CPP_STRUCT_AcceptGroupApplicationRequest_FWDDECL
#include <Modloader/app/structs/AcceptGroupApplicationRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AcceptGroupApplicationRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcceptGroupApplicationRequest_DEFINED) && !defined(IL2CPP_STRUCT_AcceptGroupApplicationRequest_FWDDECL)
#include <Modloader/app/structs/AcceptGroupApplicationRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcceptGroupApplicationRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
