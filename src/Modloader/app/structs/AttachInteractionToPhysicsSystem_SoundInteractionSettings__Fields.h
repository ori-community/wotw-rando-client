#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_DEFINED
struct SoundProvider;
struct Event_1;
struct RTPC;
struct __declspec(align(8)) AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields {
    struct Rect movementVolumeRemapping;
    struct Rect rotationVolumeRemapping;
    struct Rect stretchVolumeRemapping;
    struct SoundProvider* SoundProvider;
    struct Event_1* WiseEvent;
    struct RTPC* ImpactRtpc;
    float volume;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
