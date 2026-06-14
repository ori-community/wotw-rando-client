#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTrigger_DEFINED)
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyTrigger_DEFINED
struct LegacyTrigger__Class;
struct LegacyTrigger {
    struct LegacyTrigger__Class* klass;
    MonitorData* monitor;
    struct LegacyTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTrigger_FWDDECL)
#define IL2CPP_STRUCT_LegacyTrigger_FWDDECL
#include <Modloader/app/structs/LegacyTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTrigger_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTrigger_FWDDECL)
#include <Modloader/app/structs/LegacyTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
