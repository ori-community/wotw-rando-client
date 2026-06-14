#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeakLocator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeakLocator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakLocator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LeakLocator__Fields_DEFINED
struct HashSet_1_UnityEngine_Object_;
struct LeakLocator__Fields {
    struct MonoBehaviour__Fields _;
    float CheckInterval;
    struct HashSet_1_UnityEngine_Object_* m_initialListOfObjects;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeakLocator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeakLocator__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_UnityEngine_Object_.h>
#endif
#undef IL2CPP_STRUCT_LeakLocator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakLocator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeakLocator__Fields_FWDDECL)
#include <Modloader/app/structs/LeakLocator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeakLocator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
