#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateDebugUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateDebugUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_DEFINED)
#define IL2CPP_STRUCT_InstantiateDebugUtility_DEFINED
struct InstantiateDebugUtility__Class;
struct InstantiateDebugUtility {
    struct InstantiateDebugUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_FWDDECL)
#define IL2CPP_STRUCT_InstantiateDebugUtility_FWDDECL
#include <Modloader/app/structs/InstantiateDebugUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiateDebugUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateDebugUtility_FWDDECL)
#include <Modloader/app/structs/InstantiateDebugUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateDebugUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
