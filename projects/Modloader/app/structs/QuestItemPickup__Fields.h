#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestItemPickup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestItemPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemPickup__Fields_DEFINED)
#include <Modloader/app/structs/PickupCameraTarget__Fields.h>
#include <Modloader/app/structs/QuestItemType__Enum.h>
#if defined(IL2CPP_STRUCT_PickupCameraTarget__Fields_DEFINED) && defined(IL2CPP_STRUCT_QuestItemType__Enum_DEFINED)
#define IL2CPP_STRUCT_QuestItemPickup__Fields_DEFINED
struct MessageProvider;
struct GameObject;
struct Texture2D;
struct QuestItemPickup__Fields {
    struct PickupCameraTarget__Fields _;
    QuestItemType__Enum ItemType;

    struct MessageProvider* PickupName;
    struct MessageProvider* PickupMessage;
    struct GameObject* PickupMessageIcon;
    struct Texture2D* PickupIcon;
    struct GameObject* InHandsPrefab;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestItemPickup__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestItemPickup__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_QuestItemPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemPickup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestItemPickup__Fields_FWDDECL)
#include <Modloader/app/structs/QuestItemPickup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestItemPickup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
