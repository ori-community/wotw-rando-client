#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentUIDetails_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentUIDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentUIDetails_DEFINED)
#include <Modloader/app/structs/EquipmentUIDetails__Fields.h>
#if defined(IL2CPP_STRUCT_EquipmentUIDetails__Fields_DEFINED)
#define IL2CPP_STRUCT_EquipmentUIDetails_DEFINED
struct EquipmentUIDetails__Class;
struct EquipmentUIDetails {
    struct EquipmentUIDetails__Class* klass;
    MonitorData* monitor;
    struct EquipmentUIDetails__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentUIDetails_FWDDECL)
#define IL2CPP_STRUCT_EquipmentUIDetails_FWDDECL
#include <Modloader/app/structs/EquipmentUIDetails__Class.h>
#endif
#undef IL2CPP_STRUCT_EquipmentUIDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentUIDetails_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentUIDetails_FWDDECL)
#include <Modloader/app/structs/EquipmentUIDetails.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentUIDetails.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
