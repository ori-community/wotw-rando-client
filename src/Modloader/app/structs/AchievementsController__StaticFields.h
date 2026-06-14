#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AchievementsController__StaticFields_DEFINED
struct Queue_1_AchievementToDisplay_;
struct AchievementsController__StaticFields {
    bool DebugAchievements;
    float m_showTimer;
    float m_actualMessageTimer;
    struct Queue_1_AchievementToDisplay_* m_achievementQueue;
};
#endif
#if !defined(IL2CPP_STRUCT_AchievementsController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AchievementsController__StaticFields_FWDDECL
#include <Modloader/app/structs/Queue_1_AchievementToDisplay_.h>
#endif
#undef IL2CPP_STRUCT_AchievementsController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsController__StaticFields_FWDDECL)
#include <Modloader/app/structs/AchievementsController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
