#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityKickbackEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityKickbackEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKickbackEvent_DEFINED)
#include <Modloader/app/structs/EntityKickbackEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EntityKickbackEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityKickbackEvent_DEFINED
struct EntityKickbackEvent__Class;
struct EntityKickbackEvent {
    struct EntityKickbackEvent__Class* klass;
    MonitorData* monitor;
    struct EntityKickbackEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityKickbackEvent_FWDDECL)
#define IL2CPP_STRUCT_EntityKickbackEvent_FWDDECL
#include <Modloader/app/structs/EntityKickbackEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityKickbackEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityKickbackEvent_DEFINED) && !defined(IL2CPP_STRUCT_EntityKickbackEvent_FWDDECL)
#include <Modloader/app/structs/EntityKickbackEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityKickbackEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
