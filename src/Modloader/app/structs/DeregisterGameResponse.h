#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeregisterGameResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeregisterGameResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeregisterGameResponse_DEFINED)
#include <Modloader/app/structs/DeregisterGameResponse__Fields.h>
#if defined(IL2CPP_STRUCT_DeregisterGameResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_DeregisterGameResponse_DEFINED
struct DeregisterGameResponse__Class;
struct DeregisterGameResponse {
    struct DeregisterGameResponse__Class* klass;
    MonitorData* monitor;
    struct DeregisterGameResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeregisterGameResponse_FWDDECL)
#define IL2CPP_STRUCT_DeregisterGameResponse_FWDDECL
#include <Modloader/app/structs/DeregisterGameResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_DeregisterGameResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeregisterGameResponse_DEFINED) && !defined(IL2CPP_STRUCT_DeregisterGameResponse_FWDDECL)
#include <Modloader/app/structs/DeregisterGameResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeregisterGameResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
