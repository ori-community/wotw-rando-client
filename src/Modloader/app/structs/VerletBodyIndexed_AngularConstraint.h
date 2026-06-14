#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_DEFINED)
#define IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_DEFINED
struct VerletBodyIndexed_AngularConstraint {
    int32_t IndexL0;
    int32_t IndexL1;
    float MaxAngle;
};
#endif
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_FWDDECL)
#define IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_FWDDECL
#endif
#undef IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_DEFINED) && !defined(IL2CPP_STRUCT_VerletBodyIndexed_AngularConstraint_FWDDECL)
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBodyIndexed_AngularConstraint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
