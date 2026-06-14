#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RisingStompPost__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RisingStompPost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RisingStompPost__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RisingStompPost__Fields_DEFINED
struct RisingStompPost;
struct SoundProvider;
struct ActionMethod;
struct Transform;
struct IDamageReciever__Array;
struct RisingStompPost__Fields {
    struct SaveSerialize__Fields _;
    int32_t MaxNumberOfStomps;
    float StompIntoGroundAmount;
    float RiseSpeed;
    float SpeedIntoGround;
    struct RisingStompPost* TwinPost;
    struct SoundProvider* StompSound;
    struct ActionMethod* ConstantAction;
    struct ActionMethod* StompedAction;
    struct Vector3 _startLocalPosition;
    struct Transform* _transform;
    float _distanceStompedIntoGround;
    bool _beingStomped;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RisingStompPost__Fields_FWDDECL)
#define IL2CPP_STRUCT_RisingStompPost__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/RisingStompPost.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RisingStompPost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RisingStompPost__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RisingStompPost__Fields_FWDDECL)
#include <Modloader/app/structs/RisingStompPost__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RisingStompPost__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
