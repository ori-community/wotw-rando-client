#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShopKeeperHints__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShopKeeperHints__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopKeeperHints__Fields_DEFINED)
#define IL2CPP_STRUCT_ShopKeeperHints__Fields_DEFINED
struct GameObject;
struct Transform;
struct MessageProvider;
struct __declspec(align(8)) ShopKeeperHints__Fields {
    struct GameObject* MessagePrefab;
    struct Transform* MessageAnchor;
    float MessageDuration;
    struct MessageProvider* ShardNotDiscovered;
    struct MessageProvider* NoUpgradeAvailable;
    struct MessageProvider* NotEnoughSpiritLight;
    struct MessageProvider* NotEnoughOre;
    struct MessageProvider* IsLocked;
    struct MessageProvider* MaxedOut;
    struct MessageProvider* AlreadyOwned;
    struct MessageProvider* Undiscovered;
    struct MessageProvider* ShardTraderUpgradeRequired;
};
#endif
#if !defined(IL2CPP_STRUCT_ShopKeeperHints__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShopKeeperHints__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShopKeeperHints__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShopKeeperHints__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShopKeeperHints__Fields_FWDDECL)
#include <Modloader/app/structs/ShopKeeperHints__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShopKeeperHints__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
