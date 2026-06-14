#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundProvider_DEFINED)
#include <Modloader/app/structs/SoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundProvider_DEFINED
struct SoundProvider__Class;
struct SoundProvider {
    struct SoundProvider__Class* klass;
    MonitorData* monitor;
    struct SoundProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundProvider_FWDDECL)
#define IL2CPP_STRUCT_SoundProvider_FWDDECL
#include <Modloader/app/structs/SoundProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundProvider_DEFINED) && !defined(IL2CPP_STRUCT_SoundProvider_FWDDECL)
#include <Modloader/app/structs/SoundProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
