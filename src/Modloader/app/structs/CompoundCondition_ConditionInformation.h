#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundCondition_ConditionInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundCondition_ConditionInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundCondition_ConditionInformation_DEFINED)
#include <Modloader/app/structs/CompoundCondition_ConditionInformation__Fields.h>
#if defined(IL2CPP_STRUCT_CompoundCondition_ConditionInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundCondition_ConditionInformation_DEFINED
struct CompoundCondition_ConditionInformation__Class;
struct CompoundCondition_ConditionInformation {
    struct CompoundCondition_ConditionInformation__Class* klass;
    MonitorData* monitor;
    struct CompoundCondition_ConditionInformation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompoundCondition_ConditionInformation_FWDDECL)
#define IL2CPP_STRUCT_CompoundCondition_ConditionInformation_FWDDECL
#include <Modloader/app/structs/CompoundCondition_ConditionInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_CompoundCondition_ConditionInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundCondition_ConditionInformation_DEFINED) && !defined(IL2CPP_STRUCT_CompoundCondition_ConditionInformation_FWDDECL)
#include <Modloader/app/structs/CompoundCondition_ConditionInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundCondition_ConditionInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
