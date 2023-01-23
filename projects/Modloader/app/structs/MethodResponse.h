#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodResponse_DEFINED)
#include <Modloader/app/structs/MethodResponse__Fields.h>
#if defined(IL2CPP_STRUCT_MethodResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodResponse_DEFINED
struct MethodResponse__Class;
struct MethodResponse {
    struct MethodResponse__Class* klass;
    MonitorData* monitor;
    struct MethodResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MethodResponse_FWDDECL)
#define IL2CPP_STRUCT_MethodResponse_FWDDECL
#include <Modloader/app/structs/MethodResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_MethodResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodResponse_DEFINED) && !defined(IL2CPP_STRUCT_MethodResponse_FWDDECL)
#include <Modloader/app/structs/MethodResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
