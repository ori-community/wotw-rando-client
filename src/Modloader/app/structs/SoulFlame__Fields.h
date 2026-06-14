#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoulFlame__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoulFlame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoulFlame__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SoulFlame__Fields_DEFINED
struct BaseAnimator;
struct ActionSequence;
struct GameObject;
struct Transform;
struct SoulFlame__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator* AppearAnimator;
    struct ActionSequence* TriggerSequence;
    struct GameObject* RekindleEffect;
    float EnterRadius;
    float ExitRadius;
    bool m_isInside;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoulFlame__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoulFlame__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SoulFlame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoulFlame__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoulFlame__Fields_FWDDECL)
#include <Modloader/app/structs/SoulFlame__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoulFlame__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
