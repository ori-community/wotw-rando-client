#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundMessages_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundMessages_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundMessages_DEFINED)
#include <Modloader/app/structs/SoundMessages__Fields.h>
#if defined(IL2CPP_STRUCT_SoundMessages__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundMessages_DEFINED
struct SoundMessages__Class;
struct SoundMessages {
    struct SoundMessages__Class* klass;
    MonitorData* monitor;
    struct SoundMessages__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundMessages_FWDDECL)
#define IL2CPP_STRUCT_SoundMessages_FWDDECL
#include <Modloader/app/structs/SoundMessages__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundMessages_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundMessages_DEFINED) && !defined(IL2CPP_STRUCT_SoundMessages_FWDDECL)
#include <Modloader/app/structs/SoundMessages.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundMessages.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
