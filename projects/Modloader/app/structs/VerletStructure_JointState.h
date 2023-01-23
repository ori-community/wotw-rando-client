#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_JointState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_JointState_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_JointState_DEFINED)
#include <Modloader/app/structs/VerletStructure_JointState__Fields.h>
#if defined(IL2CPP_STRUCT_VerletStructure_JointState__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_JointState_DEFINED
struct VerletStructure_JointState__Class;
struct VerletStructure_JointState {
    struct VerletStructure_JointState__Class* klass;
    MonitorData* monitor;
    struct VerletStructure_JointState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_JointState_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_JointState_FWDDECL
#include <Modloader/app/structs/VerletStructure_JointState__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_JointState_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_JointState_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_JointState_FWDDECL)
#include <Modloader/app/structs/VerletStructure_JointState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_JointState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
