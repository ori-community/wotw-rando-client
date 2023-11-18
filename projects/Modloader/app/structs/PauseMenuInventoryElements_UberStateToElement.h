#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_DEFINED)
#include <Modloader/app/structs/EquipmentType__Enum.h>
#if defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_DEFINED
struct GameObject;
struct MoonTimeline;
struct PauseMenuInventoryElements_UberStateToElement {
    EquipmentType__Enum Type;

    struct GameObject* Element;
    struct MoonTimeline* ShowTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_FWDDECL)
#define IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_DEFINED) && !defined(IL2CPP_STRUCT_PauseMenuInventoryElements_UberStateToElement_FWDDECL)
#include <Modloader/app/structs/PauseMenuInventoryElements_UberStateToElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseMenuInventoryElements_UberStateToElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
