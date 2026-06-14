#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementAsset__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementAsset__Fields_DEFINED
struct MessageProvider;
struct String;
struct Texture;
struct AchievementAsset__Fields {
    struct ScriptableObject__Fields _;
    struct MessageProvider* NameMessageProvider;
    struct MessageProvider* DescriptionMessageProvider;
    struct MessageProvider* PostDescriptionMessageProvider;
    struct String* m_name;
    struct Texture* m_icon;
    struct Texture* m_lockedIcon;
    struct String* m_playfabIdentifier;
    bool m_hidden;
    int32_t Progress;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_AchievementAsset__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_AchievementAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementAsset__Fields_FWDDECL)
#include <Modloader/app/structs/AchievementAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
