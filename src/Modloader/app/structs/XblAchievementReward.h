#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievementReward_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievementReward_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementReward_DEFINED)
#include <Modloader/app/structs/XblAchievementReward__Fields.h>
#if defined(IL2CPP_STRUCT_XblAchievementReward__Fields_DEFINED)
#define IL2CPP_STRUCT_XblAchievementReward_DEFINED
struct XblAchievementReward__Class;
struct XblAchievementReward {
    struct XblAchievementReward__Class* klass;
    MonitorData* monitor;
    struct XblAchievementReward__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievementReward_FWDDECL)
#define IL2CPP_STRUCT_XblAchievementReward_FWDDECL
#include <Modloader/app/structs/XblAchievementReward__Class.h>
#endif
#undef IL2CPP_STRUCT_XblAchievementReward_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementReward_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievementReward_FWDDECL)
#include <Modloader/app/structs/XblAchievementReward.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievementReward.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
