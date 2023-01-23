#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BTContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BTContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTContext__Fields_DEFINED)
#define IL2CPP_STRUCT_BTContext__Fields_DEFINED
struct Component_1;
struct BehaviourTree;
struct IBlackboard;
struct __declspec(align(8)) BTContext__Fields {
    struct Component_1* Agent;
    struct BehaviourTree* Tree;
    struct IBlackboard* Blackboard;
};
#endif
#if !defined(IL2CPP_STRUCT_BTContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_BTContext__Fields_FWDDECL
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/IBlackboard.h>
#endif
#undef IL2CPP_STRUCT_BTContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BTContext__Fields_FWDDECL)
#include <Modloader/app/structs/BTContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BTContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
