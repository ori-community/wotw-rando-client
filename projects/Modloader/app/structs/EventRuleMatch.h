#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventRuleMatch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventRuleMatch_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventRuleMatch_DEFINED)
#include <Modloader/app/structs/EventRuleMatch__Fields.h>
#if defined(IL2CPP_STRUCT_EventRuleMatch__Fields_DEFINED)
#define IL2CPP_STRUCT_EventRuleMatch_DEFINED
struct EventRuleMatch__Class;
struct EventRuleMatch {
    struct EventRuleMatch__Class* klass;
    MonitorData* monitor;
    struct EventRuleMatch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventRuleMatch_FWDDECL)
#define IL2CPP_STRUCT_EventRuleMatch_FWDDECL
#include <Modloader/app/structs/EventRuleMatch__Class.h>
#endif
#undef IL2CPP_STRUCT_EventRuleMatch_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventRuleMatch_DEFINED) && !defined(IL2CPP_STRUCT_EventRuleMatch_FWDDECL)
#include <Modloader/app/structs/EventRuleMatch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventRuleMatch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
