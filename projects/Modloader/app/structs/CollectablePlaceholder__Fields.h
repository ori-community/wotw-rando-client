#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectablePlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectablePlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectablePlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_CollectablePlaceholder__Fields_DEFINED
struct SerializedBooleanUberState;
struct GameObject;
struct Action;
struct CollectableCheckpointSettings;
struct VisibleOnWorldMap;
struct IUberState__Array;
struct CollectablePlaceholder__Fields {
    struct SaveSerialize__Fields _;
    struct SerializedBooleanUberState* CollectedUberState;
    float RespawnTime;
    struct GameObject* Prefab;
    bool IsStatic;
    bool UseDebug;
    struct GameObject* DisableGO;
    struct Action* OnCollectedEvent;
    struct CollectableCheckpointSettings* CollectableCheckpoint;
    float m_remainingRespawnTime;
    struct GameObject* m_instance;
    bool m_collected;
    bool m_listeningToLandEvent;
    bool m_hasVisibleOnWorldMap;
    struct VisibleOnWorldMap* m_visibleOnWorldMap;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollectablePlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollectablePlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CollectableCheckpointSettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#endif
#undef IL2CPP_STRUCT_CollectablePlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectablePlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollectablePlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/CollectablePlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectablePlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
