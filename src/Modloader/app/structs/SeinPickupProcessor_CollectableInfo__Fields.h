#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_DEFINED)
#include <Modloader/app/structs/PickupMessageIcon_PickupType__Enum.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_MessageType__Enum.h>
#if defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity_MessageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_PickupMessageIcon_PickupType__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_DEFINED
struct MessageProvider;
struct GameObject;
struct Texture2D;
struct Event_1;
struct __declspec(align(8)) SeinPickupProcessor_CollectableInfo__Fields {
    bool ShowOnlyFirstTime;
    ShowFixedTimeTextEntity_MessageType__Enum MessageType;

    struct MessageProvider* Message;
    struct MessageProvider* Name;
    PickupMessageIcon_PickupType__Enum PickupType;

    struct GameObject* Icon;
    struct Texture2D* IconTexture;
    struct GameObject* InHandsPrefab;
    float WaitTime;
    struct Event_1* SoundEvent;
    struct Event_1* CollectedAfterFirstTimeSoundEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
