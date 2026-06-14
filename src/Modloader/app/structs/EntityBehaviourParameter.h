#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityBehaviourParameter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityBehaviourParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviourParameter_DEFINED)
#define IL2CPP_STRUCT_EntityBehaviourParameter_DEFINED
struct EntityBehaviourParameter__Class;
struct EntityBehaviourParameter {
    struct EntityBehaviourParameter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityBehaviourParameter_FWDDECL)
#define IL2CPP_STRUCT_EntityBehaviourParameter_FWDDECL
#include <Modloader/app/structs/EntityBehaviourParameter__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityBehaviourParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviourParameter_DEFINED) && !defined(IL2CPP_STRUCT_EntityBehaviourParameter_FWDDECL)
#include <Modloader/app/structs/EntityBehaviourParameter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityBehaviourParameter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
