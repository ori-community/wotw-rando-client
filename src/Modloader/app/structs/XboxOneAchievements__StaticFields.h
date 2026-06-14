#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneAchievements__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneAchievements__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneAchievements__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XboxOneAchievements__StaticFields_DEFINED
struct ReadOnlyCollection_1_Challenge_;
struct ReadOnlyCollection_1_Achievement_;
struct Action_1_Achievement_;
struct Action_1_Challenge_;
struct XboxOneAchievements__StaticFields {
    struct ReadOnlyCollection_1_Challenge_* s_emptyChallenges;
    struct ReadOnlyCollection_1_Achievement_* s_emptyAchievements;
    struct Action_1_Achievement_* _OnAchievementUnlocked_k__BackingField;
    struct Action_1_Challenge_* _OnChallengeUnlocked_k__BackingField;
    bool _EnableAchievements_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneAchievements__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneAchievements__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_Achievement_.h>
#include <Modloader/app/structs/Action_1_Challenge_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Achievement_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Challenge_.h>
#endif
#undef IL2CPP_STRUCT_XboxOneAchievements__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneAchievements__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneAchievements__StaticFields_FWDDECL)
#include <Modloader/app/structs/XboxOneAchievements__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneAchievements__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
