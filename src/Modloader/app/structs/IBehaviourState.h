#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBehaviourState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBehaviourState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBehaviourState_DEFINED)
#define IL2CPP_STRUCT_IBehaviourState_DEFINED
struct IBehaviourState__Class;
struct IBehaviourState {
    struct IBehaviourState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBehaviourState_FWDDECL)
#define IL2CPP_STRUCT_IBehaviourState_FWDDECL
#include <Modloader/app/structs/IBehaviourState__Class.h>
#endif
#undef IL2CPP_STRUCT_IBehaviourState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBehaviourState_DEFINED) && !defined(IL2CPP_STRUCT_IBehaviourState_FWDDECL)
#include <Modloader/app/structs/IBehaviourState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBehaviourState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
