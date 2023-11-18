#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLeftResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLeftResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeftResponse_DEFINED)
#include <Modloader/app/structs/PlayerLeftResponse__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerLeftResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLeftResponse_DEFINED
struct PlayerLeftResponse__Class;
struct PlayerLeftResponse {
    struct PlayerLeftResponse__Class* klass;
    MonitorData* monitor;
    struct PlayerLeftResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLeftResponse_FWDDECL)
#define IL2CPP_STRUCT_PlayerLeftResponse_FWDDECL
#include <Modloader/app/structs/PlayerLeftResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLeftResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeftResponse_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLeftResponse_FWDDECL)
#include <Modloader/app/structs/PlayerLeftResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLeftResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
