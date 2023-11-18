#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteEventResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteEventResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteEventResponse_DEFINED)
#include <Modloader/app/structs/WriteEventResponse__Fields.h>
#if defined(IL2CPP_STRUCT_WriteEventResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteEventResponse_DEFINED
struct WriteEventResponse__Class;
struct WriteEventResponse {
    struct WriteEventResponse__Class* klass;
    MonitorData* monitor;
    struct WriteEventResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteEventResponse_FWDDECL)
#define IL2CPP_STRUCT_WriteEventResponse_FWDDECL
#include <Modloader/app/structs/WriteEventResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteEventResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteEventResponse_DEFINED) && !defined(IL2CPP_STRUCT_WriteEventResponse_FWDDECL)
#include <Modloader/app/structs/WriteEventResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteEventResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
