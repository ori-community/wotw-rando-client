#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_DEFINED)
#include <Modloader/app/structs/PlayerInventoryItemAddedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerInventoryItemAddedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_DEFINED
struct PlayerInventoryItemAddedEventData__Class;
struct PlayerInventoryItemAddedEventData {
    struct PlayerInventoryItemAddedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerInventoryItemAddedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_FWDDECL
#include <Modloader/app/structs/PlayerInventoryItemAddedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInventoryItemAddedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerInventoryItemAddedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInventoryItemAddedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
