#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickupBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickupBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupBase__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_PickupBase__Fields_DEFINED
struct SerializedBooleanUberState;
struct SoundProvider;
struct Action;
struct ActionMethod;
struct GameObject;
struct CollectablePlaceholder;
struct Component_1__Array;
struct Transform;
struct PickupBase__Fields {
    struct SaveSerialize__Fields _;
    struct SerializedBooleanUberState* CollectedUberState;
    bool m_hasSerializedUberState;
    bool m_cachedSerializedState;
    bool m_collected;
    struct SoundProvider* CollectedSoundProvider;
    struct Action* OnCollectedEvent;
    struct ActionMethod* OnCollectedAction;
    bool PerformPickupSequence;
    float DelayBeforeCollectable;
    bool DestroyOnCollect;
    struct GameObject* DestroyTarget;
    struct GameObject* CollectedEffect;
    struct CollectablePlaceholder* _Placeholder_k__BackingField;
    float Radius;
    bool FrustrumOptimized;
    struct Component_1__Array* m_onKillRecievers;
    struct Transform* m_transform;
    float m_currentTime;
    struct Bounds m_bounds;
    bool m_insideFrustum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickupBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_PickupBase__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/CollectablePlaceholder.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PickupBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PickupBase__Fields_FWDDECL)
#include <Modloader/app/structs/PickupBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickupBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
