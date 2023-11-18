#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_DEFINED
struct List_1_WeakPrefab_;
struct HashSet_1_System_String_;
struct InstantiateDebugIgnore__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_WeakPrefab_* IgnoreList;
    struct HashSet_1_System_String_* m_runtimeCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_FWDDECL)
#define IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/List_1_WeakPrefab_.h>
#endif
#undef IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateDebugIgnore__Fields_FWDDECL)
#include <Modloader/app/structs/InstantiateDebugIgnore__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateDebugIgnore__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
