#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompositeNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompositeNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeNode__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_CompositeNode__Fields_DEFINED
struct List_1_Moon_BehaviourSystem_BehaviourNode_;
struct CompositeNode__Fields {
    struct BehaviourNode__Fields _;
    struct List_1_Moon_BehaviourSystem_BehaviourNode_* m_children;
    bool IsDynamic;
    int32_t m_lastRunningNode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompositeNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompositeNode__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BehaviourNode_.h>
#endif
#undef IL2CPP_STRUCT_CompositeNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompositeNode__Fields_FWDDECL)
#include <Modloader/app/structs/CompositeNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompositeNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
