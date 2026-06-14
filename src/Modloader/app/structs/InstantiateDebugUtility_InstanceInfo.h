#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_DEFINED)
#include <Modloader/app/structs/InstantiateDebugUtility_InstantiationType__Enum.h>
#if defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstantiationType__Enum_DEFINED)
#define IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_DEFINED
struct String;
struct InstantiateDebugUtility_InstanceInfo {
    InstantiateDebugUtility_InstantiationType__Enum InstantiationType;

    struct String* Name;
    float Time;
    struct String* StackTrace;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_FWDDECL)
#define IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateDebugUtility_InstanceInfo_FWDDECL)
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
