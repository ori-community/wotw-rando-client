#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_DEFINED)
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__Fields.h>
#if defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_DEFINED)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_DEFINED
struct Condition_1;
struct HashSet_1_UnityEngine_Object_;
struct SuspendWhenOutOfFrustrumWithCondition__Fields {
    struct SuspendWhenOutOfFrustrum__Fields _;
    struct Condition_1* Condition;
    struct HashSet_1_UnityEngine_Object_* m_locks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_Object_.h>
#endif
#undef IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrumWithCondition__Fields_FWDDECL)
#include <Modloader/app/structs/SuspendWhenOutOfFrustrumWithCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspendWhenOutOfFrustrumWithCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
