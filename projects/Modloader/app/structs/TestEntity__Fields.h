#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestEntity__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TestEntity__Fields_DEFINED
struct BehaviourTree;
struct DynamicDataResolver;
struct TestEntity__Fields {
    struct MonoBehaviour__Fields _;
    struct BehaviourTree* m_behaviourTree;
    struct DynamicDataResolver* m_dataResolver;
    bool m_isInAir;
    bool m_canSeeTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_TestEntity__Fields_FWDDECL
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#endif
#undef IL2CPP_STRUCT_TestEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TestEntity__Fields_FWDDECL)
#include <Modloader/app/structs/TestEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
