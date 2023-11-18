#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReaction_HitPoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReaction_HitPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPoint__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HitReaction_HitPoint__Fields_DEFINED
struct String;
struct Collider;
struct __declspec(align(8)) HitReaction_HitPoint__Fields {
    struct String* name;
    struct Collider* collider;
    float crossFadeTime;
    float _crossFader_k__BackingField;
    float _timer_k__BackingField;
    struct Vector3 _force_k__BackingField;
    struct Vector3 _point_k__BackingField;
    float length;
    float crossFadeSpeed;
    float lastTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReaction_HitPoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitReaction_HitPoint__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HitReaction_HitPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReaction_HitPoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitReaction_HitPoint__Fields_FWDDECL)
#include <Modloader/app/structs/HitReaction_HitPoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReaction_HitPoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
