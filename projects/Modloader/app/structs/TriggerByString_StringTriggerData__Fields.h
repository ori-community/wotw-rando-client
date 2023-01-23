#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_DEFINED)
#include <Modloader/app/structs/TriggerByString_TriggerEvent__Enum.h>
#if defined(IL2CPP_STRUCT_TriggerByString_TriggerEvent__Enum_DEFINED)
#define IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_DEFINED
struct String;
struct __declspec(align(8)) TriggerByString_StringTriggerData__Fields {
    struct String* String;
    TriggerByString_TriggerEvent__Enum TriggerEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TriggerByString_StringTriggerData__Fields_FWDDECL)
#include <Modloader/app/structs/TriggerByString_StringTriggerData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerByString_StringTriggerData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
