#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IK1JointAnalytic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IK1JointAnalytic_INITIALIZING
#if !defined(IL2CPP_STRUCT_IK1JointAnalytic_DEFINED)
#include <Modloader/app/structs/IK1JointAnalytic__Fields.h>
#if defined(IL2CPP_STRUCT_IK1JointAnalytic__Fields_DEFINED)
#define IL2CPP_STRUCT_IK1JointAnalytic_DEFINED
struct IK1JointAnalytic__Class;
struct IK1JointAnalytic {
    struct IK1JointAnalytic__Class* klass;
    MonitorData* monitor;
    struct IK1JointAnalytic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IK1JointAnalytic_FWDDECL)
#define IL2CPP_STRUCT_IK1JointAnalytic_FWDDECL
#include <Modloader/app/structs/IK1JointAnalytic__Class.h>
#endif
#undef IL2CPP_STRUCT_IK1JointAnalytic_INITIALIZING
#if !defined(IL2CPP_STRUCT_IK1JointAnalytic_DEFINED) && !defined(IL2CPP_STRUCT_IK1JointAnalytic_FWDDECL)
#include <Modloader/app/structs/IK1JointAnalytic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IK1JointAnalytic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
