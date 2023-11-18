#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_DEFINED
struct InstantiateDebugIgnore;
struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_;
struct HashSet_1_System_String_;
struct InstantiateDebugUtility__StaticFields {
    struct InstantiateDebugIgnore* s_objectsIgnore;
    struct List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* s_info;
    struct HashSet_1_System_String_* s_requestedObjectNames;
    struct HashSet_1_System_String_* s_allPrefabNames;
    bool m_initialized;
    bool ProfileInstantiate;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/InstantiateDebugIgnore.h>
#include <Modloader/app/structs/List_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>
#endif
#undef IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateDebugUtility__StaticFields_FWDDECL)
#include <Modloader/app/structs/InstantiateDebugUtility__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateDebugUtility__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
