#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_DEFINED)
#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/EntityId.h>
#if defined(IL2CPP_STRUCT_Constraint__Enum_DEFINED) && defined(IL2CPP_STRUCT_EntityId_DEFINED)
#define IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_DEFINED
struct TimelineConstraint;
struct TimelineHelper_ConstraintWrapper {
    Constraint__Enum Constraint;

    struct TimelineConstraint* ConstraintObject;
    struct EntityId EntityId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_FWDDECL)
#define IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_FWDDECL
#include <Modloader/app/structs/TimelineConstraint.h>
#endif
#undef IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_DEFINED) && !defined(IL2CPP_STRUCT_TimelineHelper_ConstraintWrapper_FWDDECL)
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineHelper_ConstraintWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
