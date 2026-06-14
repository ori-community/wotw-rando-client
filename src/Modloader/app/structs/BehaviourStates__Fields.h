#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourStates__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourStates__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourStates__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourStates__Fields_DEFINED
struct IBehaviourState;
struct __declspec(align(8)) BehaviourStates__Fields {
    struct IBehaviourState* m_currentState;
    float m_currentStateTime;
};
#endif
#if !defined(IL2CPP_STRUCT_BehaviourStates__Fields_FWDDECL)
#define IL2CPP_STRUCT_BehaviourStates__Fields_FWDDECL
#include <Modloader/app/structs/IBehaviourState.h>
#endif
#undef IL2CPP_STRUCT_BehaviourStates__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourStates__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourStates__Fields_FWDDECL)
#include <Modloader/app/structs/BehaviourStates__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourStates__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
