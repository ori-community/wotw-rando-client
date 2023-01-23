#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementDatabase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementDatabase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementDatabase__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementDatabase__Fields_DEFINED
struct List_1_AchievementAsset_;
struct AchievementDatabase__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_AchievementAsset_* m_achievements;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementDatabase__Fields_FWDDECL)
#define IL2CPP_STRUCT_AchievementDatabase__Fields_FWDDECL
#include <Modloader/app/structs/List_1_AchievementAsset_.h>
#endif
#undef IL2CPP_STRUCT_AchievementDatabase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementDatabase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementDatabase__Fields_FWDDECL)
#include <Modloader/app/structs/AchievementDatabase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementDatabase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
