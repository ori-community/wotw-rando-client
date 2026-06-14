#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeystonePickup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeystonePickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystonePickup__Fields_DEFINED)
#include <Modloader/app/structs/KeystonePickup_KeystoneType__Enum.h>
#include <Modloader/app/structs/PickupCameraTarget__Fields.h>
#if defined(IL2CPP_STRUCT_PickupCameraTarget__Fields_DEFINED) && defined(IL2CPP_STRUCT_KeystonePickup_KeystoneType__Enum_DEFINED)
#define IL2CPP_STRUCT_KeystonePickup__Fields_DEFINED
struct GameObject;
struct VisibleOnWorldMap;
struct KeystonePickup__Fields {
    struct PickupCameraTarget__Fields _;
    KeystonePickup_KeystoneType__Enum Type;

    int32_t Amount;
    struct GameObject* KeystoneFlyToUIPrefab;
    struct VisibleOnWorldMap* m_visibleOnWorldMap;
    bool m_currentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeystonePickup__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeystonePickup__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#endif
#undef IL2CPP_STRUCT_KeystonePickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystonePickup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeystonePickup__Fields_FWDDECL)
#include <Modloader/app/structs/KeystonePickup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeystonePickup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
