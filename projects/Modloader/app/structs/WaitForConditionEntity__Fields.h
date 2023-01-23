#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForConditionEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForConditionEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForConditionEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForConditionEntity__Fields_DEFINED
struct Condition_1;
struct WaitForConditionEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Condition_1* Condition;
    bool m_isConditionSatisfied;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForConditionEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitForConditionEntity__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_WaitForConditionEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForConditionEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitForConditionEntity__Fields_FWDDECL)
#include <Modloader/app/structs/WaitForConditionEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForConditionEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
