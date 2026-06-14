#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_DEFINED)
#include <Modloader/app/structs/ServerAnimatorHelper_ConstraintData.h>
#if defined(IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_DEFINED)
#define IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_DEFINED
struct ServerAnimatorHelper_SequenceEntryData {
    int32_t AnimatorID;
    bool External;
    struct ServerAnimatorHelper_ConstraintData StartConstraint;
    struct ServerAnimatorHelper_ConstraintData EndConstraint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_FWDDECL)
#define IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_FWDDECL
#endif
#undef IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_DEFINED) && !defined(IL2CPP_STRUCT_ServerAnimatorHelper_SequenceEntryData_FWDDECL)
#include <Modloader/app/structs/ServerAnimatorHelper_SequenceEntryData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerAnimatorHelper_SequenceEntryData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
