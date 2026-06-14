#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICustomConditionDefinition__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICustomConditionDefinition__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomConditionDefinition__VTable_DEFINED)
#define IL2CPP_STRUCT_ICustomConditionDefinition__VTable_DEFINED
struct ICustomConditionDefinition__VTable {
    VirtualInvokeData GetAllConditionNames;
    VirtualInvokeData GetAllConditionGuids;
    VirtualInvokeData GetConditionNameFromGuid;
    VirtualInvokeData IsConditionGuidValid;
    VirtualInvokeData Validate;
};
#endif
#if !defined(IL2CPP_STRUCT_ICustomConditionDefinition__VTable_FWDDECL)
#define IL2CPP_STRUCT_ICustomConditionDefinition__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ICustomConditionDefinition__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomConditionDefinition__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ICustomConditionDefinition__VTable_FWDDECL)
#include <Modloader/app/structs/ICustomConditionDefinition__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICustomConditionDefinition__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
