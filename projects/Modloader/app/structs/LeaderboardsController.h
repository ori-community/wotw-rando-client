#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardsController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsController_DEFINED)
#include <Modloader/app/structs/LeaderboardsController__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderboardsController__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardsController_DEFINED
struct LeaderboardsController__Class;
struct LeaderboardsController {
    struct LeaderboardsController__Class* klass;
    MonitorData* monitor;
    struct LeaderboardsController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardsController_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardsController_FWDDECL
#include <Modloader/app/structs/LeaderboardsController__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsController_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardsController_FWDDECL)
#include <Modloader/app/structs/LeaderboardsController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardsController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
