#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameTimer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameTimer_DEFINED)
#include <Modloader/app/structs/GameTimer__Fields.h>
#if defined(IL2CPP_STRUCT_GameTimer__Fields_DEFINED)
#define IL2CPP_STRUCT_GameTimer_DEFINED
struct GameTimer__Class;
struct GameTimer {
    struct GameTimer__Class* klass;
    MonitorData* monitor;
    struct GameTimer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameTimer_FWDDECL)
#define IL2CPP_STRUCT_GameTimer_FWDDECL
#include <Modloader/app/structs/GameTimer__Class.h>
#endif
#undef IL2CPP_STRUCT_GameTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameTimer_DEFINED) && !defined(IL2CPP_STRUCT_GameTimer_FWDDECL)
#include <Modloader/app/structs/GameTimer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameTimer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
