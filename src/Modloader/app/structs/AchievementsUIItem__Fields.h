#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsUIItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUIItem__Fields_DEFINED)
#include <Modloader/app/structs/AchievementsUIItem_AchievementsUIItemState__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_AchievementsUIItem_AchievementsUIItemState__Enum_DEFINED)
#define IL2CPP_STRUCT_AchievementsUIItem__Fields_DEFINED
struct AchievementAsset;
struct Texture;
struct UberShaderComponent;
struct Renderer;
struct MessageBox;
struct MessageProvider;
struct Transform;
struct GameObject;
struct CleverMenuItem;
struct AchievementsUIItem__Fields {
    struct MonoBehaviour__Fields _;
    struct AchievementAsset* AchievementAssetFile;
    struct Texture* lockedTexture;
    struct Texture* unlockedTexture;
    struct Texture* hiddenTexture;
    struct UberShaderComponent* IconUberShader;
    struct Renderer* IconRenderer;
    struct MessageBox* NameMessageBox;
    struct MessageBox* DescriptionMessageBox;
    struct MessageProvider* HiddenAchievementName;
    struct Transform* TextFrameNormal;
    struct Transform* TextFrameHidden;
    struct Color m_lockedColor;
    struct Color m_unlockedColor;
    struct GameObject* Lock;
    struct GameObject* GlowGroup;
    struct CleverMenuItem* m_cleverMenuItem;
    AchievementsUIItem_AchievementsUIItemState__Enum ItemState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementsUIItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_AchievementsUIItem__Fields_FWDDECL
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#endif
#undef IL2CPP_STRUCT_AchievementsUIItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUIItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsUIItem__Fields_FWDDECL)
#include <Modloader/app/structs/AchievementsUIItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsUIItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
