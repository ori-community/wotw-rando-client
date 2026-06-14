#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievementProgression_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievementProgression_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementProgression_1_DEFINED)
#include <Modloader/app/structs/SizeT.h>
#include <Modloader/app/structs/TimeT.h>
#if defined(IL2CPP_STRUCT_SizeT_DEFINED) && defined(IL2CPP_STRUCT_TimeT_DEFINED)
#define IL2CPP_STRUCT_XblAchievementProgression_1_DEFINED
struct XblAchievementProgression_1 {
    void* requirements;
    struct SizeT requirementsCount;
    struct TimeT timeUnlocked;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievementProgression_1_FWDDECL)
#define IL2CPP_STRUCT_XblAchievementProgression_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_XblAchievementProgression_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementProgression_1_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievementProgression_1_FWDDECL)
#include <Modloader/app/structs/XblAchievementProgression_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievementProgression_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
