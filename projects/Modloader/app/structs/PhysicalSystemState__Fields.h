#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemState__Fields_DEFINED)
#include <Modloader/app/structs/PhysicalSystemState_PhysicalSystemStateType__Enum.h>
#if defined(IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemState__Fields_DEFINED
struct String;
struct RigidbodyState__Array;
struct JointState__Array;
struct PhysicalSystemManager;
struct EventTriggerAnimator;
struct __declspec(align(8)) PhysicalSystemState__Fields {
    struct String* StateName;
    bool Active;
    bool stateSaved;
    int32_t StateGUID;
    PhysicalSystemState_PhysicalSystemStateType__Enum StateType;

    struct RigidbodyState__Array* RigidbodyStates;
    struct JointState__Array* JointStates;
    struct PhysicalSystemManager* Manager;
    struct EventTriggerAnimator* TimelineApplyStateTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemState__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemState__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/JointState__Array.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/RigidbodyState__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSystemState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemState__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
