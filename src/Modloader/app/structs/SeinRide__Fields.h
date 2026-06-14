#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRide__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRide__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinRide__Fields_DEFINED
struct SeinRide_CartRidingState;
struct SeinRide_KuRidingState;
struct SerializedBooleanUberState;
struct Dictionary_2_RideableTypes_SeinRide_RideState_;
struct IRideable;
struct IUberState__Array;
struct SeinRide__Fields {
    struct CharacterState__Fields _;
    struct SeinRide_CartRidingState* CartRide;
    struct SeinRide_KuRidingState* KuRide;
    struct SerializedBooleanUberState* IsRidingKuUberState;
    struct Dictionary_2_RideableTypes_SeinRide_RideState_* m_rideTypeToState;
    struct IRideable* m_rideable;
    bool m_stoppedRiding;
    struct IUberState__Array* m_uberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRide__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinRide__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_RideableTypes_SeinRide_RideState_.h>
#include <Modloader/app/structs/IRideable.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/SeinRide_CartRidingState.h>
#include <Modloader/app/structs/SeinRide_KuRidingState.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_SeinRide__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinRide__Fields_FWDDECL)
#include <Modloader/app/structs/SeinRide__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRide__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
