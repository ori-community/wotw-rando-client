#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_DEFINED)
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo.h>
#if defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_DEFINED)
#define IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_DEFINED
struct InstantiateDebugUtility_InstanceInfo__Class;
struct InstantiateDebugUtility_InstanceInfo__Boxed {
    struct InstantiateDebugUtility_InstanceInfo__Class* klass;
    MonitorData* monitor;
    struct InstantiateDebugUtility_InstanceInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_FWDDECL
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
