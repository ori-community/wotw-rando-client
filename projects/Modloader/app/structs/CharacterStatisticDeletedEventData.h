#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterStatisticDeletedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterStatisticDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatisticDeletedEventData_DEFINED)
#include <Modloader/app/structs/CharacterStatisticDeletedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatisticDeletedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterStatisticDeletedEventData_DEFINED
struct CharacterStatisticDeletedEventData__Class;
struct CharacterStatisticDeletedEventData {
    struct CharacterStatisticDeletedEventData__Class* klass;
    MonitorData* monitor;
    struct CharacterStatisticDeletedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterStatisticDeletedEventData_FWDDECL)
#define IL2CPP_STRUCT_CharacterStatisticDeletedEventData_FWDDECL
#include <Modloader/app/structs/CharacterStatisticDeletedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterStatisticDeletedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatisticDeletedEventData_DEFINED) && !defined(IL2CPP_STRUCT_CharacterStatisticDeletedEventData_FWDDECL)
#include <Modloader/app/structs/CharacterStatisticDeletedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterStatisticDeletedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
