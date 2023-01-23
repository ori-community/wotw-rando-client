#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICustomConditionDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICustomConditionDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomConditionDefinition_DEFINED)
#define IL2CPP_STRUCT_ICustomConditionDefinition_DEFINED
struct ICustomConditionDefinition__Class;
struct ICustomConditionDefinition {
    struct ICustomConditionDefinition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICustomConditionDefinition_FWDDECL)
#define IL2CPP_STRUCT_ICustomConditionDefinition_FWDDECL
#include <Modloader/app/structs/ICustomConditionDefinition__Class.h>
#endif
#undef IL2CPP_STRUCT_ICustomConditionDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICustomConditionDefinition_DEFINED) && !defined(IL2CPP_STRUCT_ICustomConditionDefinition_FWDDECL)
#include <Modloader/app/structs/ICustomConditionDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICustomConditionDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
