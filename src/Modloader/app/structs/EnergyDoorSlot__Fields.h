#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyDoorSlot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyDoorSlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDoorSlot__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EnergyDoorSlot__Fields_DEFINED
struct EnergyDoor;
struct GameObject;
struct EnergyDoorSlot__Fields {
    struct MonoBehaviour__Fields _;
    int32_t Index;
    struct EnergyDoor* Door;
    bool Activated;
    struct GameObject* Slot;
    struct GameObject* ActivateSpawnEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyDoorSlot__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnergyDoorSlot__Fields_FWDDECL
#include <Modloader/app/structs/EnergyDoor.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_EnergyDoorSlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDoorSlot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnergyDoorSlot__Fields_FWDDECL)
#include <Modloader/app/structs/EnergyDoorSlot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyDoorSlot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
