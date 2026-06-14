#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementToDisplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementToDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementToDisplay_DEFINED)
#define IL2CPP_STRUCT_AchievementToDisplay_DEFINED
struct String;
struct Texture;
struct AchievementToDisplay {
    struct String* AchievementText;
    struct Texture* AchievementIcon;
};
#endif
#if !defined(IL2CPP_STRUCT_AchievementToDisplay_FWDDECL)
#define IL2CPP_STRUCT_AchievementToDisplay_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_AchievementToDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementToDisplay_DEFINED) && !defined(IL2CPP_STRUCT_AchievementToDisplay_FWDDECL)
#include <Modloader/app/structs/AchievementToDisplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementToDisplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
