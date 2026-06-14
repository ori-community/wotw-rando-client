#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EffectSpawn_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EffectSpawn_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectSpawn_DEFINED)
#include <Modloader/app/structs/EffectTransformType__Enum.h>
#if defined(IL2CPP_STRUCT_EffectTransformType__Enum_DEFINED)
#define IL2CPP_STRUCT_EffectSpawn_DEFINED
struct GameObject;
struct EffectSpawn {
    struct GameObject* Effect;
    struct GameObject* SecondaryEffect;
    EffectTransformType__Enum TransformType;

    EffectTransformType__Enum SecondaryTransformType;

    float OffsetToCenter;
    bool AlignEffect;
    bool SecondaryOptional;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EffectSpawn_FWDDECL)
#define IL2CPP_STRUCT_EffectSpawn_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_EffectSpawn_INITIALIZING
#if !defined(IL2CPP_STRUCT_EffectSpawn_DEFINED) && !defined(IL2CPP_STRUCT_EffectSpawn_FWDDECL)
#include <Modloader/app/structs/EffectSpawn.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EffectSpawn.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
