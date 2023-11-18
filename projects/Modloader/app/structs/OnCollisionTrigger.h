#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnCollisionTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnCollisionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionTrigger_DEFINED)
#include <Modloader/app/structs/OnCollisionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_OnCollisionTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_OnCollisionTrigger_DEFINED
struct OnCollisionTrigger__Class;
struct OnCollisionTrigger {
    struct OnCollisionTrigger__Class* klass;
    MonitorData* monitor;
    struct OnCollisionTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnCollisionTrigger_FWDDECL)
#define IL2CPP_STRUCT_OnCollisionTrigger_FWDDECL
#include <Modloader/app/structs/OnCollisionTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_OnCollisionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionTrigger_DEFINED) && !defined(IL2CPP_STRUCT_OnCollisionTrigger_FWDDECL)
#include <Modloader/app/structs/OnCollisionTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnCollisionTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
