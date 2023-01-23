#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityEvent_DEFINED)
#include <Modloader/app/structs/EntityEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EntityEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityEvent_DEFINED
struct EntityEvent__Class;
struct EntityEvent {
    struct EntityEvent__Class* klass;
    MonitorData* monitor;
    struct EntityEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityEvent_FWDDECL)
#define IL2CPP_STRUCT_EntityEvent_FWDDECL
#include <Modloader/app/structs/EntityEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityEvent_DEFINED) && !defined(IL2CPP_STRUCT_EntityEvent_FWDDECL)
#include <Modloader/app/structs/EntityEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
