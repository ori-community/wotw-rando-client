#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillItem__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SkillItem__Fields_DEFINED
struct List_1_AbilityType_;
struct List_1_SkillItem_;
struct Texture;
struct MessageProvider;
struct Renderer;
struct ActionMethod;
struct LegacyTransparencyAnimator;
struct GameObject;
struct SkillItem__Fields {
    struct MonoBehaviour__Fields _;
    int32_t RequiredSkillPoints;
    int32_t RequiredHardSkillPoints;
    struct List_1_AbilityType_* RequiredAbilities;
    struct List_1_SkillItem_* RequiredItems;
    AbilityType__Enum Ability;

    struct Texture* LargeIcon;
    struct Color _LargeIconColor_k__BackingField;
    struct MessageProvider* NameMessageProvider;
    struct MessageProvider* DescriptionMessageProvider;
    struct Renderer* Icon;
    struct ActionMethod* GainSkillSequence;
    struct LegacyTransparencyAnimator* m_animator;
    struct GameObject* LearntSkillGlow;
    bool HasSkillItem;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkillItem__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_AbilityType_.h>
#include <Modloader/app/structs/List_1_SkillItem_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_SkillItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkillItem__Fields_FWDDECL)
#include <Modloader/app/structs/SkillItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
