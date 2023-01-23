#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityDamageEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityDamageEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDamageEvent_DEFINED)
#include <Modloader/app/structs/EntityDamageEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EntityDamageEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityDamageEvent_DEFINED
struct EntityDamageEvent__Class;
struct EntityDamageEvent {
    struct EntityDamageEvent__Class* klass;
    MonitorData* monitor;
    struct EntityDamageEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityDamageEvent_FWDDECL)
#define IL2CPP_STRUCT_EntityDamageEvent_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityDamageEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDamageEvent_DEFINED) && !defined(IL2CPP_STRUCT_EntityDamageEvent_FWDDECL)
#include <Modloader/app/structs/EntityDamageEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityDamageEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
