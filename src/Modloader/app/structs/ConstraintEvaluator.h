#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintEvaluator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintEvaluator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintEvaluator_DEFINED)
#define IL2CPP_STRUCT_ConstraintEvaluator_DEFINED
struct ConstraintEvaluator__Class;
struct ConstraintEvaluator {
    struct ConstraintEvaluator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstraintEvaluator_FWDDECL)
#define IL2CPP_STRUCT_ConstraintEvaluator_FWDDECL
#include <Modloader/app/structs/ConstraintEvaluator__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstraintEvaluator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintEvaluator_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintEvaluator_FWDDECL)
#include <Modloader/app/structs/ConstraintEvaluator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintEvaluator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
