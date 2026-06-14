#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityDeathEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityDeathEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDeathEvent_DEFINED)
#include <Modloader/app/structs/EntityDeathEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EntityDeathEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityDeathEvent_DEFINED
struct EntityDeathEvent__Class;
struct EntityDeathEvent {
    struct EntityDeathEvent__Class* klass;
    MonitorData* monitor;
    struct EntityDeathEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityDeathEvent_FWDDECL)
#define IL2CPP_STRUCT_EntityDeathEvent_FWDDECL
#include <Modloader/app/structs/EntityDeathEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityDeathEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDeathEvent_DEFINED) && !defined(IL2CPP_STRUCT_EntityDeathEvent_FWDDECL)
#include <Modloader/app/structs/EntityDeathEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityDeathEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
