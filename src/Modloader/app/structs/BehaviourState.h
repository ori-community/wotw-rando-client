#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourState_DEFINED)
#include <Modloader/app/structs/BehaviourState__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourState__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourState_DEFINED
struct BehaviourState__Class;
struct BehaviourState {
    struct BehaviourState__Class* klass;
    MonitorData* monitor;
    struct BehaviourState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourState_FWDDECL)
#define IL2CPP_STRUCT_BehaviourState_FWDDECL
#include <Modloader/app/structs/BehaviourState__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourState_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourState_FWDDECL)
#include <Modloader/app/structs/BehaviourState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
