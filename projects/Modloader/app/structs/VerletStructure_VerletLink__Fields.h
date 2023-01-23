#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_DEFINED
struct VerletStructure_VerletJoint;
struct __declspec(align(8)) VerletStructure_VerletLink__Fields {
    int32_t jointIndexA;
    int32_t jointIndexB;
    int32_t jointIndexC;
    struct VerletStructure_VerletJoint* jointA;
    struct VerletStructure_VerletJoint* jointB;
    struct VerletStructure_VerletJoint* jointC;
    float spring;
    float length;
};
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_FWDDECL
#include <Modloader/app/structs/VerletStructure_VerletJoint.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_VerletLink__Fields_FWDDECL)
#include <Modloader/app/structs/VerletStructure_VerletLink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_VerletLink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
