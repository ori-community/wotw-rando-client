#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RocksGenerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RocksGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RocksGenerator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RocksGenerator__Fields_DEFINED
struct GameObject;
struct List_1_UnityEngine_GameObject_;
struct RocksGenerator_FloatMinMax;
struct RocksGenerator_Vector3MinMax;
struct SoundProvider;
struct RocksGenerator__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* ObjectToGenerate;
    struct List_1_UnityEngine_GameObject_* ObjectsToGenerate;
    struct RocksGenerator_FloatMinMax* GenerateFrequence;
    struct RocksGenerator_Vector3MinMax* Scale;
    struct RocksGenerator_Vector3MinMax* Velocity;
    struct RocksGenerator_Vector3MinMax* InitialRotation;
    struct RocksGenerator_Vector3MinMax* LocalPosition;
    float InitialTimeOffset;
    float MinDistanceToPlayer;
    bool CanGenerateOnScreen;
    struct SoundProvider* OnSpawnSound;
    float m_nextGenerateTime;
    float m_distanceToPlayer;
    float m_time;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RocksGenerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_RocksGenerator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/RocksGenerator_FloatMinMax.h>
#include <Modloader/app/structs/RocksGenerator_Vector3MinMax.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_RocksGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RocksGenerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RocksGenerator__Fields_FWDDECL)
#include <Modloader/app/structs/RocksGenerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RocksGenerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
