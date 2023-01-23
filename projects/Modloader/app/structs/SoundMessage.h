#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundMessage_DEFINED)
#include <Modloader/app/structs/SoundMessage__Fields.h>
#if defined(IL2CPP_STRUCT_SoundMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundMessage_DEFINED
struct SoundMessage__Class;
struct SoundMessage {
    struct SoundMessage__Class* klass;
    MonitorData* monitor;
    struct SoundMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundMessage_FWDDECL)
#define IL2CPP_STRUCT_SoundMessage_FWDDECL
#include <Modloader/app/structs/SoundMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundMessage_DEFINED) && !defined(IL2CPP_STRUCT_SoundMessage_FWDDECL)
#include <Modloader/app/structs/SoundMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
