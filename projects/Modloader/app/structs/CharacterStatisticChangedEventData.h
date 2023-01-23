#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterStatisticChangedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterStatisticChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData_DEFINED)
#include <Modloader/app/structs/CharacterStatisticChangedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterStatisticChangedEventData_DEFINED
struct CharacterStatisticChangedEventData__Class;
struct CharacterStatisticChangedEventData {
    struct CharacterStatisticChangedEventData__Class* klass;
    MonitorData* monitor;
    struct CharacterStatisticChangedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData_FWDDECL)
#define IL2CPP_STRUCT_CharacterStatisticChangedEventData_FWDDECL
#include <Modloader/app/structs/CharacterStatisticChangedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterStatisticChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData_DEFINED) && !defined(IL2CPP_STRUCT_CharacterStatisticChangedEventData_FWDDECL)
#include <Modloader/app/structs/CharacterStatisticChangedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterStatisticChangedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
