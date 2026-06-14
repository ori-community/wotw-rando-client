#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityFallEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityFallEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityFallEvent_DEFINED)
#include <Modloader/app/structs/EntityFallEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EntityFallEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityFallEvent_DEFINED
struct EntityFallEvent__Class;
struct EntityFallEvent {
    struct EntityFallEvent__Class* klass;
    MonitorData* monitor;
    struct EntityFallEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityFallEvent_FWDDECL)
#define IL2CPP_STRUCT_EntityFallEvent_FWDDECL
#include <Modloader/app/structs/EntityFallEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityFallEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityFallEvent_DEFINED) && !defined(IL2CPP_STRUCT_EntityFallEvent_FWDDECL)
#include <Modloader/app/structs/EntityFallEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityFallEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
