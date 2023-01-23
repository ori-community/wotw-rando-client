#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnOnKill__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnOnKill__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnOnKill__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpawnOnKill__Fields_DEFINED
struct GameObject;
struct SpawnOnKill__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* ObjectToSpawn;
    struct Vector3 PositionOffset;
    float Scale;
    bool TransferRotation;
    int32_t PrewarmAmount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnOnKill__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpawnOnKill__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SpawnOnKill__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnOnKill__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpawnOnKill__Fields_FWDDECL)
#include <Modloader/app/structs/SpawnOnKill__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnOnKill__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
