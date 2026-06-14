#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurrentGamesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurrentGamesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentGamesRequest_DEFINED)
#include <Modloader/app/structs/CurrentGamesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_CurrentGamesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_CurrentGamesRequest_DEFINED
struct CurrentGamesRequest__Class;
struct CurrentGamesRequest {
    struct CurrentGamesRequest__Class* klass;
    MonitorData* monitor;
    struct CurrentGamesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurrentGamesRequest_FWDDECL)
#define IL2CPP_STRUCT_CurrentGamesRequest_FWDDECL
#include <Modloader/app/structs/CurrentGamesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_CurrentGamesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentGamesRequest_DEFINED) && !defined(IL2CPP_STRUCT_CurrentGamesRequest_FWDDECL)
#include <Modloader/app/structs/CurrentGamesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurrentGamesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
