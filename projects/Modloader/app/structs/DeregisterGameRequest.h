#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeregisterGameRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeregisterGameRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeregisterGameRequest_DEFINED)
#include <Modloader/app/structs/DeregisterGameRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeregisterGameRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeregisterGameRequest_DEFINED
struct DeregisterGameRequest__Class;
struct DeregisterGameRequest {
    struct DeregisterGameRequest__Class* klass;
    MonitorData* monitor;
    struct DeregisterGameRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeregisterGameRequest_FWDDECL)
#define IL2CPP_STRUCT_DeregisterGameRequest_FWDDECL
#include <Modloader/app/structs/DeregisterGameRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeregisterGameRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeregisterGameRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeregisterGameRequest_FWDDECL)
#include <Modloader/app/structs/DeregisterGameRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeregisterGameRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
