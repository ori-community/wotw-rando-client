#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundHost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHost_DEFINED)
#include <Modloader/app/structs/SoundHost__Fields.h>
#if defined(IL2CPP_STRUCT_SoundHost__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundHost_DEFINED
struct SoundHost__Class;
struct SoundHost {
    struct SoundHost__Class* klass;
    MonitorData* monitor;
    struct SoundHost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundHost_FWDDECL)
#define IL2CPP_STRUCT_SoundHost_FWDDECL
#include <Modloader/app/structs/SoundHost__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHost_DEFINED) && !defined(IL2CPP_STRUCT_SoundHost_FWDDECL)
#include <Modloader/app/structs/SoundHost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundHost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
