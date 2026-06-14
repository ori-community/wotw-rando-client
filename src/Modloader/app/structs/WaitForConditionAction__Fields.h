#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForConditionAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForConditionAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForConditionAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForConditionAction__Fields_DEFINED
struct ActionMethod;
struct Condition_1;
struct WaitForConditionAction__Fields {
    struct ActionMethod__Fields _;
    struct ActionMethod* Action;
    struct Condition_1* Condition;
    float MaxWaitTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForConditionAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitForConditionAction__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_WaitForConditionAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForConditionAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitForConditionAction__Fields_FWDDECL)
#include <Modloader/app/structs/WaitForConditionAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForConditionAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
