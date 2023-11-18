#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourTree_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourTree_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTree_1__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourTree_1__Fields_DEFINED
struct IBehaviourTreeNode;
struct BehaviourStates;
struct BehaviourEvents;
struct __declspec(align(8)) BehaviourTree_1__Fields {
    struct IBehaviourTreeNode* Root;
    struct BehaviourStates* States;
    struct BehaviourEvents* Events;
    uint32_t m_tickId;
};
#endif
#if !defined(IL2CPP_STRUCT_BehaviourTree_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_BehaviourTree_1__Fields_FWDDECL
#include <Modloader/app/structs/BehaviourEvents.h>
#include <Modloader/app/structs/BehaviourStates.h>
#include <Modloader/app/structs/IBehaviourTreeNode.h>
#endif
#undef IL2CPP_STRUCT_BehaviourTree_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTree_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourTree_1__Fields_FWDDECL)
#include <Modloader/app/structs/BehaviourTree_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourTree_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
