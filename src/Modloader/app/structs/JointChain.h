#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointChain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointChain_DEFINED)
#include <Modloader/app/structs/JointChain__Fields.h>
#if defined(IL2CPP_STRUCT_JointChain__Fields_DEFINED)
#define IL2CPP_STRUCT_JointChain_DEFINED
struct JointChain__Class;
struct JointChain {
    struct JointChain__Class* klass;
    MonitorData* monitor;
    struct JointChain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JointChain_FWDDECL)
#define IL2CPP_STRUCT_JointChain_FWDDECL
#include <Modloader/app/structs/JointChain__Class.h>
#endif
#undef IL2CPP_STRUCT_JointChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointChain_DEFINED) && !defined(IL2CPP_STRUCT_JointChain_FWDDECL)
#include <Modloader/app/structs/JointChain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointChain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
