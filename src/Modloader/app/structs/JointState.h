#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointState_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointState_DEFINED)
#include <Modloader/app/structs/JointState__Fields.h>
#if defined(IL2CPP_STRUCT_JointState__Fields_DEFINED)
#define IL2CPP_STRUCT_JointState_DEFINED
struct JointState__Class;
struct JointState {
    struct JointState__Class* klass;
    MonitorData* monitor;
    struct JointState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JointState_FWDDECL)
#define IL2CPP_STRUCT_JointState_FWDDECL
#include <Modloader/app/structs/JointState__Class.h>
#endif
#undef IL2CPP_STRUCT_JointState_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointState_DEFINED) && !defined(IL2CPP_STRUCT_JointState_FWDDECL)
#include <Modloader/app/structs/JointState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
