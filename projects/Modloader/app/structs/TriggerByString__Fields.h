#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerByString__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerByString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerByString__Fields_DEFINED)
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerByString__Fields_DEFINED
struct TriggerByString_StringTriggerData;
struct TriggerByString__Fields {
    struct LegacyTrigger__Fields _;
    struct TriggerByString_StringTriggerData* Data;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerByString__Fields_FWDDECL)
#define IL2CPP_STRUCT_TriggerByString__Fields_FWDDECL
#include <Modloader/app/structs/TriggerByString_StringTriggerData.h>
#endif
#undef IL2CPP_STRUCT_TriggerByString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerByString__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TriggerByString__Fields_FWDDECL)
#include <Modloader/app/structs/TriggerByString__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerByString__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
