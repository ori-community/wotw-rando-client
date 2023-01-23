#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsController_DEFINED)
#include <Modloader/app/structs/AchievementsController__Fields.h>
#if defined(IL2CPP_STRUCT_AchievementsController__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementsController_DEFINED
struct AchievementsController__Class;
struct AchievementsController {
    struct AchievementsController__Class* klass;
    MonitorData* monitor;
    struct AchievementsController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementsController_FWDDECL)
#define IL2CPP_STRUCT_AchievementsController_FWDDECL
#include <Modloader/app/structs/AchievementsController__Class.h>
#endif
#undef IL2CPP_STRUCT_AchievementsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsController_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsController_FWDDECL)
#include <Modloader/app/structs/AchievementsController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
