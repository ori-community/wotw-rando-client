#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentWheel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentWheel_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentWheel_DEFINED)
#include <Modloader/app/structs/EquipmentWheel__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentWheel__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentWheel_DEFINED
struct EquipmentWheel__Class;
struct EquipmentWheel {
    struct EquipmentWheel__Class* klass;
    MonitorData* monitor;
    struct EquipmentWheel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentWheel_FWDDECL)
#define IL2CPP_STRUCT_EquipmentWheel_FWDDECL
#include <Modloader/app/structs/EquipmentWheel__Class.h>
#endif
#undef IL2CPP_STRUCT_EquipmentWheel_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentWheel_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentWheel_FWDDECL)
#include <Modloader/app/structs/EquipmentWheel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentWheel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
