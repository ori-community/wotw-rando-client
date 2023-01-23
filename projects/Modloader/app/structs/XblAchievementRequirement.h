#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievementRequirement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievementRequirement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementRequirement_DEFINED)
#include <Modloader/app/structs/XblAchievementRequirement__Fields.h>
#if defined(IL2CPP_STRUCT_XblAchievementRequirement__Fields_DEFINED)
#define IL2CPP_STRUCT_XblAchievementRequirement_DEFINED
struct XblAchievementRequirement__Class;
struct XblAchievementRequirement {
    struct XblAchievementRequirement__Class* klass;
    MonitorData* monitor;
    struct XblAchievementRequirement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievementRequirement_FWDDECL)
#define IL2CPP_STRUCT_XblAchievementRequirement_FWDDECL
#include <Modloader/app/structs/XblAchievementRequirement__Class.h>
#endif
#undef IL2CPP_STRUCT_XblAchievementRequirement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementRequirement_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievementRequirement_FWDDECL)
#include <Modloader/app/structs/XblAchievementRequirement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievementRequirement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
