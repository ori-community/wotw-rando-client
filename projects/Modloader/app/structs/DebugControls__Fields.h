#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugControls__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugControls__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugControls__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DebugControls__Fields_DEFINED
struct GameObject;
struct List_1_AbilityType_;
struct List_1_SpiritShardType_;
struct List_1_EquipmentType_;
struct List_1_Moon_SerializedIntUberState_;
struct DebugControls__Fields {
    struct MonoBehaviour__Fields _;
    float FastForwardTimeScale;
    struct GameObject* TorchPrefab;
    struct List_1_AbilityType_* AbilitiesToEnableOnQ;
    struct List_1_SpiritShardType_* DontGiveTheseSpiritShardsOnQ;
    struct List_1_EquipmentType_* DontGiveThisEquipmentOnQ;
    struct List_1_Moon_SerializedIntUberState_* QuestsToGiveOnShiftP;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugControls__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugControls__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_AbilityType_.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_Moon_SerializedIntUberState_.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#endif
#undef IL2CPP_STRUCT_DebugControls__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugControls__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugControls__Fields_FWDDECL)
#include <Modloader/app/structs/DebugControls__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugControls__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
