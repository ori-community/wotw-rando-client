#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerVCPurchaseEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerVCPurchaseEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerVCPurchaseEventData_DEFINED)
#include <Modloader/app/structs/PlayerVCPurchaseEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerVCPurchaseEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerVCPurchaseEventData_DEFINED
struct PlayerVCPurchaseEventData__Class;
struct PlayerVCPurchaseEventData {
    struct PlayerVCPurchaseEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerVCPurchaseEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerVCPurchaseEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerVCPurchaseEventData_FWDDECL
#include <Modloader/app/structs/PlayerVCPurchaseEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerVCPurchaseEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerVCPurchaseEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerVCPurchaseEventData_FWDDECL)
#include <Modloader/app/structs/PlayerVCPurchaseEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerVCPurchaseEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
