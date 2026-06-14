#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyWaitForTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyWaitForTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyWaitForTrigger_DEFINED)
#include <Modloader/app/structs/LegacyWaitForTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyWaitForTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyWaitForTrigger_DEFINED
struct LegacyWaitForTrigger__Class;
struct LegacyWaitForTrigger {
    struct LegacyWaitForTrigger__Class* klass;
    MonitorData* monitor;
    struct LegacyWaitForTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyWaitForTrigger_FWDDECL)
#define IL2CPP_STRUCT_LegacyWaitForTrigger_FWDDECL
#include <Modloader/app/structs/LegacyWaitForTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyWaitForTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyWaitForTrigger_DEFINED) && !defined(IL2CPP_STRUCT_LegacyWaitForTrigger_FWDDECL)
#include <Modloader/app/structs/LegacyWaitForTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyWaitForTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
