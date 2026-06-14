#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_VerletJoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_VerletJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletJoint_DEFINED)
#include <Modloader/app/structs/VerletStructure_VerletJoint__Fields.h>
#if defined(IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_VerletJoint_DEFINED
struct VerletStructure_VerletJoint__Class;
struct VerletStructure_VerletJoint {
    struct VerletStructure_VerletJoint__Class* klass;
    MonitorData* monitor;
    struct VerletStructure_VerletJoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletJoint_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_VerletJoint_FWDDECL
#include <Modloader/app/structs/VerletStructure_VerletJoint__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_VerletJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletJoint_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_VerletJoint_FWDDECL)
#include <Modloader/app/structs/VerletStructure_VerletJoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_VerletJoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
