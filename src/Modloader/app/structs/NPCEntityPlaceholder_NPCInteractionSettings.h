#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_DEFINED)
#include <Modloader/app/structs/NPCAnchorConfiguration__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_NPCAnchorConfiguration__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_DEFINED
struct NPCEntityPlaceholder_NPCInteractionSettings {
    bool OverrideAnchorSetup;
    NPCAnchorConfiguration__Enum AnchorSetup;

    bool OverridePlayerAnchors;
    struct Vector2 PlayerAnchorLeft;
    struct Vector2 PlayerAnchorRight;
    bool OverrideInteractionSetup;
    float InteractionRadius;
    struct Vector2 InteractionOffset;
    bool OverrideInteractionCameraSettings;
    struct Vector3 NpcCameraTargetLeft;
    struct Vector3 NpcCameraTargetRight;
    bool OverrideInteractionCameraShopSettings;
    struct Vector3 ShopNpcCameraTargetLeft;
    struct Vector3 ShopNpcCameraTargetRight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_FWDDECL)
#define IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_DEFINED) && !defined(IL2CPP_STRUCT_NPCEntityPlaceholder_NPCInteractionSettings_FWDDECL)
#include <Modloader/app/structs/NPCEntityPlaceholder_NPCInteractionSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCEntityPlaceholder_NPCInteractionSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
