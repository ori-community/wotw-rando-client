#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointChains_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointChains_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointChains_DEFINED)
#include <Modloader/app/structs/JointChains__Fields.h>
#if defined(IL2CPP_STRUCT_JointChains__Fields_DEFINED)
#define IL2CPP_STRUCT_JointChains_DEFINED
struct JointChains__Class;
struct JointChains {
    struct JointChains__Class* klass;
    MonitorData* monitor;
    struct JointChains__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JointChains_FWDDECL)
#define IL2CPP_STRUCT_JointChains_FWDDECL
#include <Modloader/app/structs/JointChains__Class.h>
#endif
#undef IL2CPP_STRUCT_JointChains_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointChains_DEFINED) && !defined(IL2CPP_STRUCT_JointChains_FWDDECL)
#include <Modloader/app/structs/JointChains.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointChains.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
