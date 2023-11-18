#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomObjectGenerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomObjectGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomObjectGenerator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RandomObjectGenerator__Fields_DEFINED
struct GameObject;
struct RandomObjectGenerator__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* ObjectPrefab;
    float ObjectGenerationFrequency;
    float MaxSize;
    float MinSize;
    struct Vector3 InitialVelocity;
    float m_lastSpawnTime;
    struct GameObject* m_groupParent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RandomObjectGenerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_RandomObjectGenerator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_RandomObjectGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomObjectGenerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RandomObjectGenerator__Fields_FWDDECL)
#include <Modloader/app/structs/RandomObjectGenerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomObjectGenerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
