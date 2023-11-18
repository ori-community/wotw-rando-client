#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriSpeechSounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriSpeechSounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriSpeechSounds_DEFINED)
#include <Modloader/app/structs/OriSpeechSounds__Fields.h>
#if defined(IL2CPP_STRUCT_OriSpeechSounds__Fields_DEFINED)
#define IL2CPP_STRUCT_OriSpeechSounds_DEFINED
struct OriSpeechSounds__Class;
struct OriSpeechSounds {
    struct OriSpeechSounds__Class* klass;
    MonitorData* monitor;
    struct OriSpeechSounds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriSpeechSounds_FWDDECL)
#define IL2CPP_STRUCT_OriSpeechSounds_FWDDECL
#include <Modloader/app/structs/OriSpeechSounds__Class.h>
#endif
#undef IL2CPP_STRUCT_OriSpeechSounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriSpeechSounds_DEFINED) && !defined(IL2CPP_STRUCT_OriSpeechSounds_FWDDECL)
#include <Modloader/app/structs/OriSpeechSounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriSpeechSounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
