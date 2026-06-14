#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEquipmentAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEquipmentAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEquipmentAction_DEFINED)
#include <Modloader/app/structs/GetEquipmentAction__Fields.h>
#if defined(IL2CPP_STRUCT_GetEquipmentAction__Fields_DEFINED)
#define IL2CPP_STRUCT_GetEquipmentAction_DEFINED
struct GetEquipmentAction__Class;
struct GetEquipmentAction {
    struct GetEquipmentAction__Class* klass;
    MonitorData* monitor;
    struct GetEquipmentAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEquipmentAction_FWDDECL)
#define IL2CPP_STRUCT_GetEquipmentAction_FWDDECL
#include <Modloader/app/structs/GetEquipmentAction__Class.h>
#endif
#undef IL2CPP_STRUCT_GetEquipmentAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEquipmentAction_DEFINED) && !defined(IL2CPP_STRUCT_GetEquipmentAction_FWDDECL)
#include <Modloader/app/structs/GetEquipmentAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEquipmentAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
