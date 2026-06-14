#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FingerRig__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FingerRig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FingerRig__Fields_DEFINED)
#include <Modloader/app/structs/SolverManager__Fields.h>
#if defined(IL2CPP_STRUCT_SolverManager__Fields_DEFINED)
#define IL2CPP_STRUCT_FingerRig__Fields_DEFINED
struct Finger__Array;
struct FingerRig__Fields {
    struct SolverManager__Fields _;
    float weight;
    struct Finger__Array* fingers;
    bool _initiated_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FingerRig__Fields_FWDDECL)
#define IL2CPP_STRUCT_FingerRig__Fields_FWDDECL
#include <Modloader/app/structs/Finger__Array.h>
#endif
#undef IL2CPP_STRUCT_FingerRig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FingerRig__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FingerRig__Fields_FWDDECL)
#include <Modloader/app/structs/FingerRig__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FingerRig__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
