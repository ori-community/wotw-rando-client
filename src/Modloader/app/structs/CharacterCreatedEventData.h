#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterCreatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCreatedEventData_DEFINED)
#include <Modloader/app/structs/CharacterCreatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterCreatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterCreatedEventData_DEFINED
struct CharacterCreatedEventData__Class;
struct CharacterCreatedEventData {
    struct CharacterCreatedEventData__Class* klass;
    MonitorData* monitor;
    struct CharacterCreatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterCreatedEventData_FWDDECL)
#define IL2CPP_STRUCT_CharacterCreatedEventData_FWDDECL
#include <Modloader/app/structs/CharacterCreatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCreatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_CharacterCreatedEventData_FWDDECL)
#include <Modloader/app/structs/CharacterCreatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterCreatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
