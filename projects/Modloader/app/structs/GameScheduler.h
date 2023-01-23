#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameScheduler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameScheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameScheduler_DEFINED)
#include <Modloader/app/structs/GameScheduler__Fields.h>
#if defined(IL2CPP_STRUCT_GameScheduler__Fields_DEFINED)
#define IL2CPP_STRUCT_GameScheduler_DEFINED
struct GameScheduler__Class;
struct GameScheduler {
    struct GameScheduler__Class* klass;
    MonitorData* monitor;
    struct GameScheduler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameScheduler_FWDDECL)
#define IL2CPP_STRUCT_GameScheduler_FWDDECL
#include <Modloader/app/structs/GameScheduler__Class.h>
#endif
#undef IL2CPP_STRUCT_GameScheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameScheduler_DEFINED) && !defined(IL2CPP_STRUCT_GameScheduler_FWDDECL)
#include <Modloader/app/structs/GameScheduler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameScheduler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
