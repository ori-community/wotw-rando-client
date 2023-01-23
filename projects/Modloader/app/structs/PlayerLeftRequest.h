#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLeftRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLeftRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeftRequest_DEFINED)
#include <Modloader/app/structs/PlayerLeftRequest__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerLeftRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLeftRequest_DEFINED
struct PlayerLeftRequest__Class;
struct PlayerLeftRequest {
    struct PlayerLeftRequest__Class* klass;
    MonitorData* monitor;
    struct PlayerLeftRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLeftRequest_FWDDECL)
#define IL2CPP_STRUCT_PlayerLeftRequest_FWDDECL
#include <Modloader/app/structs/PlayerLeftRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLeftRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeftRequest_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLeftRequest_FWDDECL)
#include <Modloader/app/structs/PlayerLeftRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLeftRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
