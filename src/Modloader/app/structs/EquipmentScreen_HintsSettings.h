#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentScreen_HintsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentScreen_HintsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentScreen_HintsSettings_DEFINED)
#define IL2CPP_STRUCT_EquipmentScreen_HintsSettings_DEFINED
struct GameObject;
struct Transform;
struct MessageProvider;
struct EquipmentScreen_HintsSettings {
    struct GameObject* MessagePrefab;
    struct Transform* MessageAnchor;
    float MessageDuration;
    struct MessageProvider* GlobalShardEquipFailure;
    struct MessageProvider* NoUpgradeAvailable;
    struct MessageProvider* NotEnoughSpiritLight;
    struct MessageProvider* AllSocketsAreFull;
    struct MessageProvider* CantSocketSelectedEquipment;
};
#endif
#if !defined(IL2CPP_STRUCT_EquipmentScreen_HintsSettings_FWDDECL)
#define IL2CPP_STRUCT_EquipmentScreen_HintsSettings_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EquipmentScreen_HintsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentScreen_HintsSettings_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentScreen_HintsSettings_FWDDECL)
#include <Modloader/app/structs/EquipmentScreen_HintsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentScreen_HintsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
