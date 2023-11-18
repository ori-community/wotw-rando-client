#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RiseSinkSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RiseSinkSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RiseSinkSwitch__Fields_DEFINED)
#include <Modloader/app/structs/RiseSinkSwitch_RiseSinkState__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RiseSinkSwitch_RiseSinkState__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RiseSinkSwitch__Fields_DEFINED
struct ActionMethod;
struct Transform;
struct ListOfCollidedObjects;
struct RiseSinkSwitch__Fields {
    struct SaveSerialize__Fields _;
    float SinkSpeed;
    float RiseSpeed;
    float SinkDistance;
    float MinMassToAffect;
    struct ActionMethod* OnPressedAction;
    struct Transform* TransformToAffect;
    bool TriggerOnce;
    bool m_wasTriggered;
    struct Vector3 m_startPosition;
    struct ListOfCollidedObjects* m_listOfCollidedObjects;
    bool m_active;
    RiseSinkSwitch_RiseSinkState__Enum State;

    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RiseSinkSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_RiseSinkSwitch__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ListOfCollidedObjects.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RiseSinkSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RiseSinkSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RiseSinkSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/RiseSinkSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RiseSinkSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
