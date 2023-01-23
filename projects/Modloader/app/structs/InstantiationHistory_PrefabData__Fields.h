#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_DEFINED
struct String;
struct __declspec(align(8)) InstantiationHistory_PrefabData__Fields {
    int32_t NumPrewarmedParticleSystems;
    int32_t NumParticleSystemsWithColliders;
    struct String* PrefabName;
    int32_t PooledInstantiations;
    int32_t UnpooledInstantiations;
    int32_t NewObjectInstantiations;
    double TotalPooledInstantiationTime;
    double TotalUnpooledInstantiationTime;
    double TotalNewObjectInstantiationTime;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_FWDDECL)
#define IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiationHistory_PrefabData__Fields_FWDDECL)
#include <Modloader/app/structs/InstantiationHistory_PrefabData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiationHistory_PrefabData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
