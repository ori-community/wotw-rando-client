#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_DEFINED)
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_DEFINED
struct LegacyPlayerCollisionTrigger__Class;
struct LegacyPlayerCollisionTrigger {
    struct LegacyPlayerCollisionTrigger__Class* klass;
    MonitorData* monitor;
    struct LegacyPlayerCollisionTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_FWDDECL)
#define IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_FWDDECL
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_DEFINED) && !defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger_FWDDECL)
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
