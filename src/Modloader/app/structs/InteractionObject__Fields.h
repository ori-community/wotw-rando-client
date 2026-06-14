#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionObject__Fields_DEFINED
struct Transform;
struct InteractionObject_WeightCurve__Array;
struct InteractionObject_Multiplier__Array;
struct InteractionObject_InteractionEvent__Array;
struct InteractionSystem;
struct InteractionTarget__Array;
struct InteractionObject__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* otherLookAtTarget;
    struct Transform* otherTargetsRoot;
    struct Transform* positionOffsetSpace;
    struct InteractionObject_WeightCurve__Array* weightCurves;
    struct InteractionObject_Multiplier__Array* multipliers;
    struct InteractionObject_InteractionEvent__Array* events;
    float _length_k__BackingField;
    struct InteractionSystem* _lastUsedInteractionSystem_k__BackingField;
    struct InteractionTarget__Array* targets;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionObject__Fields_FWDDECL
#include <Modloader/app/structs/InteractionObject_InteractionEvent__Array.h>
#include <Modloader/app/structs/InteractionObject_Multiplier__Array.h>
#include <Modloader/app/structs/InteractionObject_WeightCurve__Array.h>
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/InteractionTarget__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_InteractionObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionObject__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
