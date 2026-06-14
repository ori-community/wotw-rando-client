#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerReceiptValidationEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerReceiptValidationEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData_DEFINED)
#include <Modloader/app/structs/PlayerReceiptValidationEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerReceiptValidationEventData_DEFINED
struct PlayerReceiptValidationEventData__Class;
struct PlayerReceiptValidationEventData {
    struct PlayerReceiptValidationEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerReceiptValidationEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerReceiptValidationEventData_FWDDECL
#include <Modloader/app/structs/PlayerReceiptValidationEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerReceiptValidationEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerReceiptValidationEventData_FWDDECL)
#include <Modloader/app/structs/PlayerReceiptValidationEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerReceiptValidationEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
