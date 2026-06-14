#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourTreeBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourTreeBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTreeBuilder_DEFINED)
#include <Modloader/app/structs/BehaviourTreeBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourTreeBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_BehaviourTreeBuilder_DEFINED
struct BehaviourTreeBuilder__Class;
struct BehaviourTreeBuilder {
    struct BehaviourTreeBuilder__Class* klass;
    MonitorData* monitor;
    struct BehaviourTreeBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourTreeBuilder_FWDDECL)
#define IL2CPP_STRUCT_BehaviourTreeBuilder_FWDDECL
#include <Modloader/app/structs/BehaviourTreeBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourTreeBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTreeBuilder_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourTreeBuilder_FWDDECL)
#include <Modloader/app/structs/BehaviourTreeBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourTreeBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
