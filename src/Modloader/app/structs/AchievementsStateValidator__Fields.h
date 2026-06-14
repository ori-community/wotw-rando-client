#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsStateValidator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsStateValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsStateValidator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementsStateValidator__Fields_DEFINED
struct List_1_StateValidator_;
struct List_1_ConditionValidator_;
struct IUberState__Array;
struct AchievementsStateValidator__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_StateValidator_* StateValidators;
    struct List_1_ConditionValidator_* ConditionValidators;
    struct List_1_ConditionValidator_* OnGameLoadConditionValidators;
    struct IUberState__Array* m_affectingStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementsStateValidator__Fields_FWDDECL)
#define IL2CPP_STRUCT_AchievementsStateValidator__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_ConditionValidator_.h>
#include <Modloader/app/structs/List_1_StateValidator_.h>
#endif
#undef IL2CPP_STRUCT_AchievementsStateValidator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsStateValidator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsStateValidator__Fields_FWDDECL)
#include <Modloader/app/structs/AchievementsStateValidator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsStateValidator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
