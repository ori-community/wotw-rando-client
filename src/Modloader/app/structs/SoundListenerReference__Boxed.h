#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundListenerReference__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundListenerReference__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundListenerReference__Boxed_DEFINED)
#include <Modloader/app/structs/SoundListenerReference.h>
#if defined(IL2CPP_STRUCT_SoundListenerReference_DEFINED)
#define IL2CPP_STRUCT_SoundListenerReference__Boxed_DEFINED
struct SoundListenerReference__Class;
struct SoundListenerReference__Boxed {
    struct SoundListenerReference__Class* klass;
    MonitorData* monitor;
    struct SoundListenerReference fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundListenerReference__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SoundListenerReference__Boxed_FWDDECL
#include <Modloader/app/structs/SoundListenerReference__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundListenerReference__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundListenerReference__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SoundListenerReference__Boxed_FWDDECL)
#include <Modloader/app/structs/SoundListenerReference__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundListenerReference__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
