#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequencePlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequencePlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatform__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SequencePlatform__Fields_DEFINED
struct SequencePlatform;
struct SequencePlatform__Fields {
    struct SaveSerialize__Fields _;
    struct SequencePlatform* NextPlatform;
    bool NextPlatformOnTouch;
    bool VanishOnTouch;
    float DelayToNextPlatformAppear;
    float DelayToVanish;
    bool Vanish;
    bool VisibleAtStart;
    struct Vector3 m_originalScale;
    bool m_activated;
    bool m_hasBeenTouched;
    float m_vanishAmount;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequencePlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_SequencePlatform__Fields_FWDDECL
#include <Modloader/app/structs/SequencePlatform.h>
#endif
#undef IL2CPP_STRUCT_SequencePlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SequencePlatform__Fields_FWDDECL)
#include <Modloader/app/structs/SequencePlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequencePlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
