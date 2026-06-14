#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerContext_DEFINED)
#include <Modloader/app/structs/TriggerContext__Fields.h>
#if defined(IL2CPP_STRUCT_TriggerContext__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerContext_DEFINED
struct TriggerContext__Class;
struct TriggerContext {
    struct TriggerContext__Class* klass;
    MonitorData* monitor;
    struct TriggerContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerContext_FWDDECL)
#define IL2CPP_STRUCT_TriggerContext_FWDDECL
#include <Modloader/app/structs/TriggerContext__Class.h>
#endif
#undef IL2CPP_STRUCT_TriggerContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerContext_DEFINED) && !defined(IL2CPP_STRUCT_TriggerContext_FWDDECL)
#include <Modloader/app/structs/TriggerContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
