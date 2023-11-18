#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourEvents_DEFINED)
#include <Modloader/app/structs/BehaviourEvents__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourEvents_DEFINED
struct BehaviourEvents__Class;
struct BehaviourEvents {
    struct BehaviourEvents__Class* klass;
    MonitorData* monitor;
    struct BehaviourEvents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourEvents_FWDDECL)
#define IL2CPP_STRUCT_BehaviourEvents_FWDDECL
#include <Modloader/app/structs/BehaviourEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourEvents_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourEvents_FWDDECL)
#include <Modloader/app/structs/BehaviourEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
