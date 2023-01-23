#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiationHistory_PrefabData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiationHistory_PrefabData_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData_DEFINED)
#include <Modloader/app/structs/InstantiationHistory_PrefabData__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiationHistory_PrefabData_DEFINED
struct InstantiationHistory_PrefabData__Class;
struct InstantiationHistory_PrefabData {
    struct InstantiationHistory_PrefabData__Class* klass;
    MonitorData* monitor;
    struct InstantiationHistory_PrefabData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData_FWDDECL)
#define IL2CPP_STRUCT_InstantiationHistory_PrefabData_FWDDECL
#include <Modloader/app/structs/InstantiationHistory_PrefabData__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiationHistory_PrefabData_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData_DEFINED) && !defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData_FWDDECL)
#include <Modloader/app/structs/InstantiationHistory_PrefabData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiationHistory_PrefabData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
