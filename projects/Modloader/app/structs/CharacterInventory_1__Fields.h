#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterInventory_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterInventory_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInventory_1__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterInventory_1__Fields_DEFINED
struct String;
struct List_1_PlayFab_ServerModels_ItemInstance_;
struct __declspec(align(8)) CharacterInventory_1__Fields {
    struct String* CharacterId;
    struct List_1_PlayFab_ServerModels_ItemInstance_* Inventory;
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterInventory_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterInventory_1__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_ItemInstance_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CharacterInventory_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInventory_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterInventory_1__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterInventory_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterInventory_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
