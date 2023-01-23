#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RetaliationRuleHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RetaliationRuleHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetaliationRuleHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_RetaliationRuleHandler__Fields_DEFINED
struct RetaliationRuleHandler_DamageTime;
struct Action;
struct List_1_RetaliationRuleHandler_DamageTime_;
struct __declspec(align(8)) RetaliationRuleHandler__Fields {
    struct RetaliationRuleHandler_DamageTime* RetaliationConditions;
    float RetaliationActivationTimeWindow;
    struct Action* OnRetaliationContitionMet;
    float m_retaliationAllowedTimer;
    struct List_1_RetaliationRuleHandler_DamageTime_* m_takenDamageElapsedTime;
};
#endif
#if !defined(IL2CPP_STRUCT_RetaliationRuleHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_RetaliationRuleHandler__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/List_1_RetaliationRuleHandler_DamageTime_.h>
#include <Modloader/app/structs/RetaliationRuleHandler_DamageTime.h>
#endif
#undef IL2CPP_STRUCT_RetaliationRuleHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetaliationRuleHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RetaliationRuleHandler__Fields_FWDDECL)
#include <Modloader/app/structs/RetaliationRuleHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RetaliationRuleHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
