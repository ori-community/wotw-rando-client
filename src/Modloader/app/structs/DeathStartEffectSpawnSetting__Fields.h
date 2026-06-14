#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonReference_1_UnityEngine_Transform_;
struct MoonBool;
struct Entity;
struct __declspec(align(8)) DeathStartEffectSpawnSetting__Fields {
    struct MoonReference_1_UnityEngine_GameObject_* Prefab;
    struct MoonReference_1_UnityEngine_Transform_* InstantiationLocation;
    struct Vector3 InstantiationOffset;
    struct MoonBool* ShouldMirror;
    struct Entity* m_entity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_FWDDECL
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeathStartEffectSpawnSetting__Fields_FWDDECL)
#include <Modloader/app/structs/DeathStartEffectSpawnSetting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathStartEffectSpawnSetting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
