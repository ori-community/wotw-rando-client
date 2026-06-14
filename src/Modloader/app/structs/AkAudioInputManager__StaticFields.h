#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAudioInputManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAudioInputManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioInputManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AkAudioInputManager__StaticFields_DEFINED
struct Dictionary_2_System_UInt32_AkAudioInputManager_AudioSamplesDelegate_;
struct Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_;
struct AkAudioFormat;
struct AkAudioInputManager_AudioSamplesInteropDelegate;
struct AkAudioInputManager_AudioFormatInteropDelegate;
struct AkAudioInputManager__StaticFields {
    bool initialized;
    struct Dictionary_2_System_UInt32_AkAudioInputManager_AudioSamplesDelegate_* audioSamplesDelegates;
    struct Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_* audioFormatDelegates;
    struct AkAudioFormat* audioFormat;
    struct AkAudioInputManager_AudioSamplesInteropDelegate* audioSamplesDelegate;
    struct AkAudioInputManager_AudioFormatInteropDelegate* audioFormatDelegate;
};
#endif
#if !defined(IL2CPP_STRUCT_AkAudioInputManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AkAudioInputManager__StaticFields_FWDDECL
#include <Modloader/app/structs/AkAudioFormat.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioFormatInteropDelegate.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesInteropDelegate.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt32_AkAudioInputManager_AudioFormatDelegate_.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt32_AkAudioInputManager_AudioSamplesDelegate_.h>
#endif
#undef IL2CPP_STRUCT_AkAudioInputManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioInputManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AkAudioInputManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/AkAudioInputManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAudioInputManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
