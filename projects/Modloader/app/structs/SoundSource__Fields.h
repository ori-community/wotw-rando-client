#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundSource__Fields_DEFINED)
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_SoundSource__Fields_DEFINED
struct SoundProvider;
struct Action;
struct SoundSource__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundProvider* Sound;
    bool DestroyOnSoundEnd;
    bool PlayAtStart;
    struct Action* m_onEnd;
    bool m_triggeredOnStart;
    bool m_canDestroy;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct ArtificialSoundHostReference m_soundHost;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundSource__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SoundSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundSource__Fields_FWDDECL)
#include <Modloader/app/structs/SoundSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
