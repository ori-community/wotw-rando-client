#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAchievements__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAchievements__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAchievements__Fields_DEFINED)
#define IL2CPP_STRUCT_XAchievements__Fields_DEFINED
struct XAchievement__Array;
struct __declspec(align(8)) XAchievements__Fields {
    struct XAchievement__Array* achievements;
};
#endif
#if !defined(IL2CPP_STRUCT_XAchievements__Fields_FWDDECL)
#define IL2CPP_STRUCT_XAchievements__Fields_FWDDECL
#include <Modloader/app/structs/XAchievement__Array.h>
#endif
#undef IL2CPP_STRUCT_XAchievements__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAchievements__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XAchievements__Fields_FWDDECL)
#include <Modloader/app/structs/XAchievements__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAchievements__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
