#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioAPIOptions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioAPIOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioAPIOptions__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuOptionsList__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioAPIOptions__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct MessageProvider;
struct GameObject;
struct AudioAPIOptions__Fields {
    struct CleverMenuOptionsList__Fields _;
    struct CleverMenuItemSelectionManager* SelectionManager;
    struct MessageProvider* Wasapi;
    struct MessageProvider* XAudio2;
    struct MessageProvider* DirectSound;
    struct MessageProvider* Default;
    struct GameObject* PromptPrefab;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioAPIOptions__Fields_FWDDECL)
#define IL2CPP_STRUCT_AudioAPIOptions__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_AudioAPIOptions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioAPIOptions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AudioAPIOptions__Fields_FWDDECL)
#include <Modloader/app/structs/AudioAPIOptions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioAPIOptions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
