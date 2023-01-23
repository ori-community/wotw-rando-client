#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateCondition_StateConditionSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateCondition_StateConditionSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateCondition_StateConditionSetupData_DEFINED)
#define IL2CPP_STRUCT_StateCondition_StateConditionSetupData_DEFINED
struct StateCondition_StateConditionSetupData__Class;
struct StateCondition_StateConditionSetupData {
    struct StateCondition_StateConditionSetupData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StateCondition_StateConditionSetupData_FWDDECL)
#define IL2CPP_STRUCT_StateCondition_StateConditionSetupData_FWDDECL
#include <Modloader/app/structs/StateCondition_StateConditionSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_StateCondition_StateConditionSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateCondition_StateConditionSetupData_DEFINED) && !defined(IL2CPP_STRUCT_StateCondition_StateConditionSetupData_FWDDECL)
#include <Modloader/app/structs/StateCondition_StateConditionSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateCondition_StateConditionSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
