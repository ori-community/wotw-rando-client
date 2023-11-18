#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RopeGrabbedCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RopeGrabbedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopeGrabbedCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_RopeGrabbedCondition__Fields_DEFINED
struct GrabbableRope;
struct RopeGrabbedCondition__Fields {
    struct Condition_1__Fields _;
    struct GrabbableRope* Rope;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RopeGrabbedCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_RopeGrabbedCondition__Fields_FWDDECL
#include <Modloader/app/structs/GrabbableRope.h>
#endif
#undef IL2CPP_STRUCT_RopeGrabbedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopeGrabbedCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RopeGrabbedCondition__Fields_FWDDECL)
#include <Modloader/app/structs/RopeGrabbedCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RopeGrabbedCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
