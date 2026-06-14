#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInventory__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInventory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInventory__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInventory__Fields_DEFINED
struct HUDManager;
struct Action_1_Int32_;
struct PlayerInventory__Fields {
    struct MonoBehaviour__Fields _;
    struct HUDManager* hud;
    int32_t _NumCoins_k__BackingField;
    struct Action_1_Int32_* coinCollected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInventory__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerInventory__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/HUDManager.h>
#endif
#undef IL2CPP_STRUCT_PlayerInventory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInventory__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInventory__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerInventory__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInventory__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
