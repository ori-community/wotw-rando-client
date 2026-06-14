#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointChains_Chain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointChains_Chain_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointChains_Chain_DEFINED)
#include <Modloader/app/structs/JointChains_Chain__Fields.h>
#if defined(IL2CPP_STRUCT_JointChains_Chain__Fields_DEFINED)
#define IL2CPP_STRUCT_JointChains_Chain_DEFINED
struct JointChains_Chain__Class;
struct JointChains_Chain {
    struct JointChains_Chain__Class* klass;
    MonitorData* monitor;
    struct JointChains_Chain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JointChains_Chain_FWDDECL)
#define IL2CPP_STRUCT_JointChains_Chain_FWDDECL
#include <Modloader/app/structs/JointChains_Chain__Class.h>
#endif
#undef IL2CPP_STRUCT_JointChains_Chain_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointChains_Chain_DEFINED) && !defined(IL2CPP_STRUCT_JointChains_Chain_FWDDECL)
#include <Modloader/app/structs/JointChains_Chain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointChains_Chain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
