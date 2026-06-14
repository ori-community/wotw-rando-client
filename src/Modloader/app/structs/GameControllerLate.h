#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameControllerLate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameControllerLate_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameControllerLate_DEFINED)
#include <Modloader/app/structs/GameControllerLate__Fields.h>
#if defined(IL2CPP_STRUCT_GameControllerLate__Fields_DEFINED)
#define IL2CPP_STRUCT_GameControllerLate_DEFINED
struct GameControllerLate__Class;
struct GameControllerLate {
    struct GameControllerLate__Class* klass;
    MonitorData* monitor;
    struct GameControllerLate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameControllerLate_FWDDECL)
#define IL2CPP_STRUCT_GameControllerLate_FWDDECL
#include <Modloader/app/structs/GameControllerLate__Class.h>
#endif
#undef IL2CPP_STRUCT_GameControllerLate_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameControllerLate_DEFINED) && !defined(IL2CPP_STRUCT_GameControllerLate_FWDDECL)
#include <Modloader/app/structs/GameControllerLate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameControllerLate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
