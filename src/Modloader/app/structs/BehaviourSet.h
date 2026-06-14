#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourSet_DEFINED)
#include <Modloader/app/structs/BehaviourSet__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourSet__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourSet_DEFINED
struct BehaviourSet__Class;
struct BehaviourSet {
    struct BehaviourSet__Class* klass;
    MonitorData* monitor;
    struct BehaviourSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourSet_FWDDECL)
#define IL2CPP_STRUCT_BehaviourSet_FWDDECL
#include <Modloader/app/structs/BehaviourSet__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourSet_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourSet_FWDDECL)
#include <Modloader/app/structs/BehaviourSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
