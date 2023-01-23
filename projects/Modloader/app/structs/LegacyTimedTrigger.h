#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTimedTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTimedTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimedTrigger_DEFINED)
#include <Modloader/app/structs/LegacyTimedTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyTimedTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyTimedTrigger_DEFINED
struct LegacyTimedTrigger__Class;
struct LegacyTimedTrigger {
    struct LegacyTimedTrigger__Class* klass;
    MonitorData* monitor;
    struct LegacyTimedTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTimedTrigger_FWDDECL)
#define IL2CPP_STRUCT_LegacyTimedTrigger_FWDDECL
#include <Modloader/app/structs/LegacyTimedTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyTimedTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimedTrigger_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTimedTrigger_FWDDECL)
#include <Modloader/app/structs/LegacyTimedTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTimedTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
