#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_DEFINED
struct ActionSequence;
struct GameObject;
struct Transform;
struct BaseAnimator;
struct IgnitableSpiritTorch__Fields {
    struct SaveSerialize__Fields _;
    struct ActionSequence* OnLitAction;
    struct GameObject* LightSource;
    float TouchRadius;
    struct Transform* m_transform;
    bool m_isLit;
    float LitRadius;
    float UnlitRadius;
    struct BaseAnimator* IgniteAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_FWDDECL)
#define IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IgnitableSpiritTorch__Fields_FWDDECL)
#include <Modloader/app/structs/IgnitableSpiritTorch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnitableSpiritTorch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
