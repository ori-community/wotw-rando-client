#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_DEFINED
struct GameObject;
struct Rigidbody;
struct BoxCollider;
struct WindImpactEffectSpawner_Trace__Array;
struct List_1_UnityEngine_RaycastHit_;
struct WindImpactEffectSpawner__Fields {
    struct MonoBehaviour__Fields _;
    struct LayerMask Layers;
    float m_traceSpacing;
    float m_minHitSeparation;
    struct GameObject* ImpactEffectPrefab;
    struct Rigidbody* m_rb;
    struct BoxCollider* m_box;
    struct WindImpactEffectSpawner_Trace__Array* m_traces;
    struct List_1_UnityEngine_RaycastHit_* m_hits;
    float m_height;
    float m_rangeUpper;
    float m_rangeLower;
    struct Vector3 m_prevPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_FWDDECL
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/WindImpactEffectSpawner_Trace__Array.h>
#endif
#undef IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindImpactEffectSpawner__Fields_FWDDECL)
#include <Modloader/app/structs/WindImpactEffectSpawner__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindImpactEffectSpawner__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
