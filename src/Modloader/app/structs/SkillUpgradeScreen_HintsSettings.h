#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_DEFINED)
#define IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_DEFINED
struct GameObject;
struct Transform;
struct MessageProvider;
struct SkillUpgradeScreen_HintsSettings {
    struct GameObject* MessagePrefab;
    struct Transform* MessageAnchor;
    float MessageDuration;
    struct MessageProvider* NotEnoughSpiritLight;
    struct MessageProvider* MaxedOut;
};
#endif
#if !defined(IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_FWDDECL)
#define IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_DEFINED) && !defined(IL2CPP_STRUCT_SkillUpgradeScreen_HintsSettings_FWDDECL)
#include <Modloader/app/structs/SkillUpgradeScreen_HintsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillUpgradeScreen_HintsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
