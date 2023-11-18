#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourParameter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourParameter_DEFINED)
#define IL2CPP_STRUCT_BehaviourParameter_DEFINED
struct BehaviourParameter__Class;
struct BehaviourParameter {
    struct BehaviourParameter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BehaviourParameter_FWDDECL)
#define IL2CPP_STRUCT_BehaviourParameter_FWDDECL
#include <Modloader/app/structs/BehaviourParameter__Class.h>
#endif
#undef IL2CPP_STRUCT_BehaviourParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourParameter_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourParameter_FWDDECL)
#include <Modloader/app/structs/BehaviourParameter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourParameter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
