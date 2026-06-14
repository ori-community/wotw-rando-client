#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundPlayerRef__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundPlayerRef__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundPlayerRef__Boxed_DEFINED)
#include <Modloader/app/structs/SoundPlayerRef.h>
#if defined(IL2CPP_STRUCT_SoundPlayerRef_DEFINED)
#define IL2CPP_STRUCT_SoundPlayerRef__Boxed_DEFINED
struct SoundPlayerRef__Class;
struct SoundPlayerRef__Boxed {
    struct SoundPlayerRef__Class* klass;
    MonitorData* monitor;
    struct SoundPlayerRef fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundPlayerRef__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SoundPlayerRef__Boxed_FWDDECL
#include <Modloader/app/structs/SoundPlayerRef__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundPlayerRef__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundPlayerRef__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SoundPlayerRef__Boxed_FWDDECL)
#include <Modloader/app/structs/SoundPlayerRef__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundPlayerRef__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
