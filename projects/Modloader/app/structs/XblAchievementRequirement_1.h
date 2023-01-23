#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievementRequirement_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievementRequirement_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementRequirement_1_DEFINED)
#include <Modloader/app/structs/UTF8StringPtr.h>
#if defined(IL2CPP_STRUCT_UTF8StringPtr_DEFINED)
#define IL2CPP_STRUCT_XblAchievementRequirement_1_DEFINED
struct XblAchievementRequirement_1 {
    struct UTF8StringPtr id;
    struct UTF8StringPtr currentProgressValue;
    struct UTF8StringPtr targetProgressValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievementRequirement_1_FWDDECL)
#define IL2CPP_STRUCT_XblAchievementRequirement_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_XblAchievementRequirement_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementRequirement_1_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievementRequirement_1_FWDDECL)
#include <Modloader/app/structs/XblAchievementRequirement_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievementRequirement_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
