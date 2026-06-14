#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardDescription__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardDescription__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardDescription__Fields_DEFINED)
#include <Modloader/app/structs/SpiritShardEquipType__Enum.h>
#if defined(IL2CPP_STRUCT_SpiritShardEquipType__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritShardDescription__Fields_DEFINED
struct MessageProvider;
struct ConditionUberState;
struct List_1_UpgradablePropertyLevel_;
struct State;
struct __declspec(align(8)) SpiritShardDescription__Fields {
    struct MessageProvider* Name;
    struct MessageProvider* PickupMessage;
    SpiritShardEquipType__Enum EquipType;

    struct ConditionUberState* VisibleInShop;
    struct ConditionUberState* PurchasableInShop;
    int32_t InitialBuyCost;
    struct List_1_UpgradablePropertyLevel_* UpgradablePropertyLevels;
    struct State* OnState;
    struct State* OffState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardDescription__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardDescription__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/List_1_UpgradablePropertyLevel_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/State.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardDescription__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardDescription__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardDescription__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardDescription__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardDescription__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
