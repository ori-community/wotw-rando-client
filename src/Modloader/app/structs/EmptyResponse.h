#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmptyResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmptyResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyResponse_DEFINED)
#include <Modloader/app/structs/EmptyResponse__Fields.h>
#if defined(IL2CPP_STRUCT_EmptyResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_EmptyResponse_DEFINED
struct EmptyResponse__Class;
struct EmptyResponse {
    struct EmptyResponse__Class* klass;
    MonitorData* monitor;
    struct EmptyResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmptyResponse_FWDDECL)
#define IL2CPP_STRUCT_EmptyResponse_FWDDECL
#include <Modloader/app/structs/EmptyResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_EmptyResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyResponse_DEFINED) && !defined(IL2CPP_STRUCT_EmptyResponse_FWDDECL)
#include <Modloader/app/structs/EmptyResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmptyResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
