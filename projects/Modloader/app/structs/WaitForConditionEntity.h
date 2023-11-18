#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForConditionEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForConditionEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForConditionEntity_DEFINED)
#include <Modloader/app/structs/WaitForConditionEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForConditionEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForConditionEntity_DEFINED
struct WaitForConditionEntity__Class;
struct WaitForConditionEntity {
    struct WaitForConditionEntity__Class* klass;
    MonitorData* monitor;
    struct WaitForConditionEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForConditionEntity_FWDDECL)
#define IL2CPP_STRUCT_WaitForConditionEntity_FWDDECL
#include <Modloader/app/structs/WaitForConditionEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForConditionEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForConditionEntity_DEFINED) && !defined(IL2CPP_STRUCT_WaitForConditionEntity_FWDDECL)
#include <Modloader/app/structs/WaitForConditionEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForConditionEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
