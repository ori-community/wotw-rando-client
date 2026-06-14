#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourEventIdGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourEventIdGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourEventIdGenerator_DEFINED)
#define IL2CPP_STRUCT_BehaviourEventIdGenerator_DEFINED
struct BehaviourEventIdGenerator__Class;
struct BehaviourEventIdGenerator {
    struct BehaviourEventIdGenerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BehaviourEventIdGenerator_FWDDECL)
#define IL2CPP_STRUCT_BehaviourEventIdGenerator_FWDDECL
#include <Modloader/app/structs/BehaviourEventIdGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourEventIdGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourEventIdGenerator_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourEventIdGenerator_FWDDECL)
#include <Modloader/app/structs/BehaviourEventIdGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourEventIdGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
