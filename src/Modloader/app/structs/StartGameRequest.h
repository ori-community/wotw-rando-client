#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartGameRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartGameRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameRequest_DEFINED)
#include <Modloader/app/structs/StartGameRequest__Fields.h>
#if defined(IL2CPP_STRUCT_StartGameRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_StartGameRequest_DEFINED
struct StartGameRequest__Class;
struct StartGameRequest {
    struct StartGameRequest__Class* klass;
    MonitorData* monitor;
    struct StartGameRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartGameRequest_FWDDECL)
#define IL2CPP_STRUCT_StartGameRequest_FWDDECL
#include <Modloader/app/structs/StartGameRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_StartGameRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameRequest_DEFINED) && !defined(IL2CPP_STRUCT_StartGameRequest_FWDDECL)
#include <Modloader/app/structs/StartGameRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartGameRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
