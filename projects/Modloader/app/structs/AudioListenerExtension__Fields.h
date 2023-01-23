#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioListenerExtension__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioListenerExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListenerExtension__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioListenerExtension__Fields_DEFINED
struct AudioListener;
struct AudioListenerExtension__Fields {
    struct ScriptableObject__Fields _;
    struct AudioListener* m_audioListener;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioListenerExtension__Fields_FWDDECL)
#define IL2CPP_STRUCT_AudioListenerExtension__Fields_FWDDECL
#include <Modloader/app/structs/AudioListener.h>
#endif
#undef IL2CPP_STRUCT_AudioListenerExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListenerExtension__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AudioListenerExtension__Fields_FWDDECL)
#include <Modloader/app/structs/AudioListenerExtension__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioListenerExtension__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
