#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_DEFINED
struct List_1_UnityEngine_GameObject_;
struct __declspec(align(8)) InstantiationRecycleHelper__Fields {
    int32_t m_prewarmAmount;
    struct List_1_UnityEngine_GameObject_* m_instances;
    bool m_limitAmountOfActiveInstances;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_FWDDECL)
#include <Modloader/app/structs/InstantiationRecycleHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiationRecycleHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
