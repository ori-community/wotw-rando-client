#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rock__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Rock__Fields_DEFINED
struct Transform;
struct ActionSequence;
struct ActionMethod;
struct IDamageReciever__Array;
struct Rock__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* m_transform;
    struct ActionSequence* OnBashHighlightAction;
    struct ActionMethod* OnHitGround;
    float Lifetime;
    float m_lifeRemaining;
    bool m_forceExplodeOnContact;
    bool ExplodeOnContact;
    bool Bashable;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rock__Fields_FWDDECL)
#define IL2CPP_STRUCT_Rock__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Rock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Rock__Fields_FWDDECL)
#include <Modloader/app/structs/Rock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
