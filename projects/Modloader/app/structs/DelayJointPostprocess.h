#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayJointPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayJointPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess_DEFINED)
#include <Modloader/app/structs/DelayJointPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_DelayJointPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayJointPostprocess_DEFINED
struct DelayJointPostprocess__Class;
struct DelayJointPostprocess {
    struct DelayJointPostprocess__Class* klass;
    MonitorData* monitor;
    struct DelayJointPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess_FWDDECL)
#define IL2CPP_STRUCT_DelayJointPostprocess_FWDDECL
#include <Modloader/app/structs/DelayJointPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_DelayJointPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_DelayJointPostprocess_FWDDECL)
#include <Modloader/app/structs/DelayJointPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayJointPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
