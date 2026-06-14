#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_DEFINED)
#define IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_DEFINED
struct MessageProvider;
struct SpellUIEquipScreen_MessageProviders {
    struct MessageProvider* ButtonNavigate;
    struct MessageProvider* ButtonSocket;
    struct MessageProvider* ButtonEquip;
    struct MessageProvider* ButtonSelect;
    struct MessageProvider* ButtonCancel;
    struct MessageProvider* ButtonEquipPassive;
    struct MessageProvider* ButtonUnequipPassive;
    struct MessageProvider* ButtonUpgrade;
    struct MessageProvider* ButtonMaxLevel;
};
#endif
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_FWDDECL)
#define IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_FWDDECL)
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
