#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartGameResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartGameResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameResponse_DEFINED)
#include <Modloader/app/structs/StartGameResponse__Fields.h>
#if defined(IL2CPP_STRUCT_StartGameResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_StartGameResponse_DEFINED
struct StartGameResponse__Class;
struct StartGameResponse {
    struct StartGameResponse__Class* klass;
    MonitorData* monitor;
    struct StartGameResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartGameResponse_FWDDECL)
#define IL2CPP_STRUCT_StartGameResponse_FWDDECL
#include <Modloader/app/structs/StartGameResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_StartGameResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameResponse_DEFINED) && !defined(IL2CPP_STRUCT_StartGameResponse_FWDDECL)
#include <Modloader/app/structs/StartGameResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartGameResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
