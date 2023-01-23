#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickupContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickupContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupContext__Fields_DEFINED)
#include <Modloader/app/structs/PickupMessageIcon_PickupType__Enum.h>
#if defined(IL2CPP_STRUCT_PickupMessageIcon_PickupType__Enum_DEFINED)
#define IL2CPP_STRUCT_PickupContext__Fields_DEFINED
struct GameObject;
struct Texture2D;
struct MessageProvider;
struct __declspec(align(8)) PickupContext__Fields {
    PickupMessageIcon_PickupType__Enum PickupType;

    struct GameObject* IconPrefab;
    struct Texture2D* Icon;
    struct MessageProvider* Name;
    struct MessageProvider* Description;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickupContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_PickupContext__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_PickupContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PickupContext__Fields_FWDDECL)
#include <Modloader/app/structs/PickupContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickupContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
