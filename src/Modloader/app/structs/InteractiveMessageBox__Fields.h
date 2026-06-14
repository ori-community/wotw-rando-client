#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractiveMessageBox__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractiveMessageBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractiveMessageBox__Fields_DEFINED)
#include <Modloader/app/structs/InteractiveMessageBox_ProgressInput__Enum.h>
#include <Modloader/app/structs/InteractiveMessageBox_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_InteractiveMessageBox_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_InteractiveMessageBox_ProgressInput__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_InteractiveMessageBox__Fields_DEFINED
struct MessageBox;
struct GameObject;
struct BaseAnimator;
struct SoundHost;
struct SoundSource;
struct InteractiveMessageBox__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* MessageBox;
    InteractiveMessageBox_State__Enum m_state;

    struct GameObject* Button;
    struct BaseAnimator* ButtonAnimator;
    float WaitTimeFirstMessage;
    float m_remainingWaitTime;
    bool m_prevLockState;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
    struct SoundHost* SoundHost;
    struct SoundSource* MessageProviderSoundSource;
    struct SoundSource* MessageFinishedSound;
    struct SoundSource* NextMessageSound;
    struct SoundSource* CloseMessageBoxSound;
    bool CanCancel;
    bool CanOpenInventory;
    bool CanPlayInteractionSounds;
    float m_messageTime;
    InteractiveMessageBox_ProgressInput__Enum ProgressOnInput;

    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractiveMessageBox__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractiveMessageBox__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_InteractiveMessageBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractiveMessageBox__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractiveMessageBox__Fields_FWDDECL)
#include <Modloader/app/structs/InteractiveMessageBox__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractiveMessageBox__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
