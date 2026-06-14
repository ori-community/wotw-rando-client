#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurableJoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurableJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurableJoint_DEFINED)
#include <Modloader/app/structs/ConfigurableJoint__Fields.h>
#if defined(IL2CPP_STRUCT_ConfigurableJoint__Fields_DEFINED)
#define IL2CPP_STRUCT_ConfigurableJoint_DEFINED
struct ConfigurableJoint__Class;
struct ConfigurableJoint {
    struct ConfigurableJoint__Class* klass;
    MonitorData* monitor;
    struct ConfigurableJoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfigurableJoint_FWDDECL)
#define IL2CPP_STRUCT_ConfigurableJoint_FWDDECL
#include <Modloader/app/structs/ConfigurableJoint__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurableJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurableJoint_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurableJoint_FWDDECL)
#include <Modloader/app/structs/ConfigurableJoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurableJoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
