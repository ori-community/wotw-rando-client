#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourStates_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourStates_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourStates_DEFINED)
#include <Modloader/app/structs/BehaviourStates__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourStates__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourStates_DEFINED
struct BehaviourStates__Class;
struct BehaviourStates {
    struct BehaviourStates__Class* klass;
    MonitorData* monitor;
    struct BehaviourStates__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourStates_FWDDECL)
#define IL2CPP_STRUCT_BehaviourStates_FWDDECL
#include <Modloader/app/structs/BehaviourStates__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourStates_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourStates_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourStates_FWDDECL)
#include <Modloader/app/structs/BehaviourStates.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourStates.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
