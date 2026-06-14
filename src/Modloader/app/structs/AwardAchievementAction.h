#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AwardAchievementAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AwardAchievementAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwardAchievementAction_DEFINED)
#include <Modloader/app/structs/AwardAchievementAction__Fields.h>
#if defined(IL2CPP_STRUCT_AwardAchievementAction__Fields_DEFINED)
#define IL2CPP_STRUCT_AwardAchievementAction_DEFINED
struct AwardAchievementAction__Class;
struct AwardAchievementAction {
    struct AwardAchievementAction__Class* klass;
    MonitorData* monitor;
    struct AwardAchievementAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AwardAchievementAction_FWDDECL)
#define IL2CPP_STRUCT_AwardAchievementAction_FWDDECL
#include <Modloader/app/structs/AwardAchievementAction__Class.h>
#endif
#undef IL2CPP_STRUCT_AwardAchievementAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwardAchievementAction_DEFINED) && !defined(IL2CPP_STRUCT_AwardAchievementAction_FWDDECL)
#include <Modloader/app/structs/AwardAchievementAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AwardAchievementAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
