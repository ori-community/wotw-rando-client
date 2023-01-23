#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBehaviourEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBehaviourEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBehaviourEvent_DEFINED)
#define IL2CPP_STRUCT_IBehaviourEvent_DEFINED
struct IBehaviourEvent__Class;
struct IBehaviourEvent {
    struct IBehaviourEvent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBehaviourEvent_FWDDECL)
#define IL2CPP_STRUCT_IBehaviourEvent_FWDDECL
#include <Modloader/app/structs/IBehaviourEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_IBehaviourEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBehaviourEvent_DEFINED) && !defined(IL2CPP_STRUCT_IBehaviourEvent_FWDDECL)
#include <Modloader/app/structs/IBehaviourEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBehaviourEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
