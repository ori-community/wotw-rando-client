#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterConsumedItemEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterConsumedItemEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterConsumedItemEventData_DEFINED)
#include <Modloader/app/structs/CharacterConsumedItemEventData__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterConsumedItemEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterConsumedItemEventData_DEFINED
struct CharacterConsumedItemEventData__Class;
struct CharacterConsumedItemEventData {
    struct CharacterConsumedItemEventData__Class* klass;
    MonitorData* monitor;
    struct CharacterConsumedItemEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterConsumedItemEventData_FWDDECL)
#define IL2CPP_STRUCT_CharacterConsumedItemEventData_FWDDECL
#include <Modloader/app/structs/CharacterConsumedItemEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterConsumedItemEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterConsumedItemEventData_DEFINED) && !defined(IL2CPP_STRUCT_CharacterConsumedItemEventData_FWDDECL)
#include <Modloader/app/structs/CharacterConsumedItemEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterConsumedItemEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
