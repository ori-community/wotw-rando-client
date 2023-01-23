#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryUISlot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryUISlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryUISlot__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentUIInventoryItem__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIInventoryItem__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryUISlot__Fields_DEFINED
struct GameObject;
struct Renderer;
struct ReplaySetting;
struct MemoryUISlot__Fields {
    struct EquipmentUIInventoryItem__Fields _;
    struct GameObject* SelectionHighlight;
    struct GameObject* WatchIcon;
    struct GameObject* PlayIcon;
    struct GameObject* LockImage;
    struct Renderer* Image;
    struct ReplaySetting* m_replaySetting;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryUISlot__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemoryUISlot__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/ReplaySetting.h>
#endif
#undef IL2CPP_STRUCT_MemoryUISlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryUISlot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemoryUISlot__Fields_FWDDECL)
#include <Modloader/app/structs/MemoryUISlot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryUISlot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
