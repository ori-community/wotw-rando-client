#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievementProgression__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievementProgression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementProgression__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_XblAchievementProgression__Fields_DEFINED
struct XblAchievementRequirement__Array;
struct __declspec(align(8)) XblAchievementProgression__Fields {
    struct XblAchievementRequirement__Array* _Requirements_k__BackingField;
    struct DateTime _TimeUnlocked_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievementProgression__Fields_FWDDECL)
#define IL2CPP_STRUCT_XblAchievementProgression__Fields_FWDDECL
#include <Modloader/app/structs/XblAchievementRequirement__Array.h>
#endif
#undef IL2CPP_STRUCT_XblAchievementProgression__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementProgression__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievementProgression__Fields_FWDDECL)
#include <Modloader/app/structs/XblAchievementProgression__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievementProgression__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
