#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerPayForPurchaseEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerPayForPurchaseEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData_DEFINED)
#include <Modloader/app/structs/PlayerPayForPurchaseEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerPayForPurchaseEventData_DEFINED
struct PlayerPayForPurchaseEventData__Class;
struct PlayerPayForPurchaseEventData {
    struct PlayerPayForPurchaseEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerPayForPurchaseEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerPayForPurchaseEventData_FWDDECL
#include <Modloader/app/structs/PlayerPayForPurchaseEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerPayForPurchaseEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerPayForPurchaseEventData_FWDDECL)
#include <Modloader/app/structs/PlayerPayForPurchaseEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerPayForPurchaseEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
