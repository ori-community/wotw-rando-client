#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIBindingItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIBindingItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIBindingItem__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/InventoryItem__Fields.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#if defined(IL2CPP_STRUCT_InventoryItem__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpellInventory_Binding__Enum_DEFINED) && defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_SpellUIBindingItem__Fields_DEFINED
struct Renderer;
struct MessageBox;
struct ActionMethod;
struct SpellUIBindingItem__Fields {
    struct InventoryItem__Fields _;
    SpellInventory_Binding__Enum BindingSlot;

    struct Renderer* IconRenderer;
    struct MessageBox* NameBox;
    struct ActionMethod* ActionOnChanged;
    bool ShowName;
    EquipmentType__Enum m_type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIBindingItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUIBindingItem__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_SpellUIBindingItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIBindingItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIBindingItem__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUIBindingItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIBindingItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
