#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentScreen_DEFINED)
#include <Modloader/app/structs/EquipmentScreen__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentScreen_DEFINED
struct EquipmentScreen__Class;
struct EquipmentScreen {
    struct EquipmentScreen__Class* klass;
    MonitorData* monitor;
    struct EquipmentScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentScreen_FWDDECL)
#define IL2CPP_STRUCT_EquipmentScreen_FWDDECL
#include <Modloader/app/structs/EquipmentScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_EquipmentScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentScreen_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentScreen_FWDDECL)
#include <Modloader/app/structs/EquipmentScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
