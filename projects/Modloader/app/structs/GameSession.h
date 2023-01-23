#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameSession_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSession_DEFINED)
#include <Modloader/app/structs/GameSession__Fields.h>
#if defined(IL2CPP_STRUCT_GameSession__Fields_DEFINED)
#define IL2CPP_STRUCT_GameSession_DEFINED
struct GameSession__Class;
struct GameSession {
    struct GameSession__Class* klass;
    MonitorData* monitor;
    struct GameSession__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameSession_FWDDECL)
#define IL2CPP_STRUCT_GameSession_FWDDECL
#include <Modloader/app/structs/GameSession__Class.h>
#endif
#undef IL2CPP_STRUCT_GameSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSession_DEFINED) && !defined(IL2CPP_STRUCT_GameSession_FWDDECL)
#include <Modloader/app/structs/GameSession.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameSession.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
