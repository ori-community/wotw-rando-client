#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStartPurchaseEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStartPurchaseEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStartPurchaseEventData_DEFINED)
#include <Modloader/app/structs/PlayerStartPurchaseEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerStartPurchaseEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerStartPurchaseEventData_DEFINED
struct PlayerStartPurchaseEventData__Class;
struct PlayerStartPurchaseEventData {
    struct PlayerStartPurchaseEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerStartPurchaseEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStartPurchaseEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerStartPurchaseEventData_FWDDECL
#include <Modloader/app/structs/PlayerStartPurchaseEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerStartPurchaseEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStartPurchaseEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStartPurchaseEventData_FWDDECL)
#include <Modloader/app/structs/PlayerStartPurchaseEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStartPurchaseEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
