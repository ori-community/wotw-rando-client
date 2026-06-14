#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatUISlot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatUISlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatUISlot__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_StatUISlot__Fields_DEFINED
struct GameObject;
struct Renderer;
struct MessageBox;
struct StatSetting;
struct StatUISlot__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* SelectionHighlight;
    struct GameObject* Icon;
    struct GameObject* LockImage;
    struct Renderer* Image;
    struct MessageBox* SubText;
    struct MessageBox* Title;
    struct GameObject* TitleParent;
    struct StatSetting* m_statSetting;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatUISlot__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatUISlot__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/StatSetting.h>
#endif
#undef IL2CPP_STRUCT_StatUISlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatUISlot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatUISlot__Fields_FWDDECL)
#include <Modloader/app/structs/StatUISlot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatUISlot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
