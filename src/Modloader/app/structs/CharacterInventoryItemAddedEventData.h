#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_DEFINED)
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_DEFINED
struct CharacterInventoryItemAddedEventData__Class;
struct CharacterInventoryItemAddedEventData {
    struct CharacterInventoryItemAddedEventData__Class* klass;
    MonitorData* monitor;
    struct CharacterInventoryItemAddedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_FWDDECL)
#define IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_FWDDECL
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_DEFINED) && !defined(IL2CPP_STRUCT_CharacterInventoryItemAddedEventData_FWDDECL)
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterInventoryItemAddedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
