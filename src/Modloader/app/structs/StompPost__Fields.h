#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StompPost__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StompPost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StompPost__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_StompPost__Fields_DEFINED
struct SoundProvider;
struct ActionMethod;
struct Transform;
struct IDamageReciever__Array;
struct StompPost__Fields {
    struct SaveSerialize__Fields _;
    int32_t NumberOfStomps;
    float StompIntoGroundAmount;
    float RisingDelay;
    float RiseSpeed;
    struct SoundProvider* StompSound;
    struct SoundProvider* AllTheWayInSound;
    struct ActionMethod* AllTheWayInAction;
    struct Vector3 m_startLocalPosition;
    struct Transform* m_transform;
    float m_distanceStompedIntoGround;
    float m_remainingRiseDelayTime;
    bool m_activated;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StompPost__Fields_FWDDECL)
#define IL2CPP_STRUCT_StompPost__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_StompPost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StompPost__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StompPost__Fields_FWDDECL)
#include <Modloader/app/structs/StompPost__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StompPost__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
