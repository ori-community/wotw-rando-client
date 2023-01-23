#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_DEFINED)
#define IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_DEFINED
struct StateCondition_StateConditionSetupData__Array__Class;
struct StateCondition_StateConditionSetupData;
struct StateCondition_StateConditionSetupData__Array {
    struct StateCondition_StateConditionSetupData__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct StateCondition_StateConditionSetupData* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_FWDDECL)
#define IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_FWDDECL
#include <Modloader/app/structs/StateCondition_StateConditionSetupData.h>
#include <Modloader/app/structs/StateCondition_StateConditionSetupData__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_DEFINED) && !defined(IL2CPP_STRUCT_StateCondition_StateConditionSetupData__Array_FWDDECL)
#include <Modloader/app/structs/StateCondition_StateConditionSetupData__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateCondition_StateConditionSetupData__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
