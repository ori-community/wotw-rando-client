#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundListenerReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundListenerReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundListenerReference_DEFINED)
#define IL2CPP_STRUCT_SoundListenerReference_DEFINED
struct ISoundListener;
struct SoundListenerReference {
    struct ISoundListener* _Listener_k__BackingField;
    int64_t _Version_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundListenerReference_FWDDECL)
#define IL2CPP_STRUCT_SoundListenerReference_FWDDECL
#include <Modloader/app/structs/ISoundListener.h>
#endif
#undef IL2CPP_STRUCT_SoundListenerReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundListenerReference_DEFINED) && !defined(IL2CPP_STRUCT_SoundListenerReference_FWDDECL)
#include <Modloader/app/structs/SoundListenerReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundListenerReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
