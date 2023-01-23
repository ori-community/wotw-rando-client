#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatZone__Fields_DEFINED)
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_FloatZone__Fields_DEFINED
struct Varying2DSoundProvider;
struct SoundDescriptor;
struct FloatZone__Fields {
    struct MonoBehaviour__Fields _;
    bool RequiresWindRestored;
    struct Varying2DSoundProvider* LoopSoundProvider;
    float Acceleration;
    float Deceleration;
    float TooFastDeceleration;
    float DesiredSpeed;
    struct Rect BoundingRect;
    struct ArtificialSoundHostReference m_lastLoopSound;
    struct SoundDescriptor* m_soundDescriptor;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatZone__Fields_FWDDECL
#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_FloatZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatZone__Fields_FWDDECL)
#include <Modloader/app/structs/FloatZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
