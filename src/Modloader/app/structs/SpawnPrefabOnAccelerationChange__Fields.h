#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_DEFINED
struct GameObject;
struct InstantiationRecycleHelper;
struct SpawnPrefabOnAccelerationChange__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* PrefabToSpawn;
    float MinimalAccelerationToSpawn;
    float CooldownTime;
    float EmissionRatioMultiplier;
    int32_t PrewarmAmount;
    bool LimitAmountOfActiveInstance;
    struct InstantiationRecycleHelper* m_recycleHelper;
    struct Vector3 m_previousPosition;
    float m_lastInstanciationTime;
    float m_previousSpeed;
    SuspendableMask__Enum _Mask_k__BackingField;

    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#endif
#undef IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpawnPrefabOnAccelerationChange__Fields_FWDDECL)
#include <Modloader/app/structs/SpawnPrefabOnAccelerationChange__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnPrefabOnAccelerationChange__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
