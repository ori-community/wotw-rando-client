#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericDamageTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericDamageTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericDamageTrigger_DEFINED)
#include <Modloader/app/structs/GenericDamageTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_GenericDamageTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericDamageTrigger_DEFINED
struct GenericDamageTrigger__Class;
struct GenericDamageTrigger {
    struct GenericDamageTrigger__Class* klass;
    MonitorData* monitor;
    struct GenericDamageTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericDamageTrigger_FWDDECL)
#define IL2CPP_STRUCT_GenericDamageTrigger_FWDDECL
#include <Modloader/app/structs/GenericDamageTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericDamageTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericDamageTrigger_DEFINED) && !defined(IL2CPP_STRUCT_GenericDamageTrigger_FWDDECL)
#include <Modloader/app/structs/GenericDamageTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericDamageTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
