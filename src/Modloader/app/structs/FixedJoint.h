#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedJoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedJoint_DEFINED)
#include <Modloader/app/structs/FixedJoint__Fields.h>
#if defined(IL2CPP_STRUCT_FixedJoint__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedJoint_DEFINED
struct FixedJoint__Class;
struct FixedJoint {
    struct FixedJoint__Class* klass;
    MonitorData* monitor;
    struct FixedJoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedJoint_FWDDECL)
#define IL2CPP_STRUCT_FixedJoint_FWDDECL
#include <Modloader/app/structs/FixedJoint__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedJoint_DEFINED) && !defined(IL2CPP_STRUCT_FixedJoint_FWDDECL)
#include <Modloader/app/structs/FixedJoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedJoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
