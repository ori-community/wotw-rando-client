#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_DEFINED)
#include <Modloader/app/structs/LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum.h>
#if defined(IL2CPP_STRUCT_LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum_DEFINED)
#define IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_DEFINED
struct ServerAnimatorHelper_ConstraintData {
    int32_t AnimatorID;
    float Offset;
    LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum Anchor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_FWDDECL)
#define IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_FWDDECL
#endif
#undef IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_DEFINED) && !defined(IL2CPP_STRUCT_ServerAnimatorHelper_ConstraintData_FWDDECL)
#include <Modloader/app/structs/ServerAnimatorHelper_ConstraintData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerAnimatorHelper_ConstraintData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
