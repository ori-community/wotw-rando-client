#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundSourcePlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundSourcePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundSourcePlaceholder_DEFINED)
#include <Modloader/app/structs/SoundSourcePlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SoundSourcePlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundSourcePlaceholder_DEFINED
struct SoundSourcePlaceholder__Class;
struct SoundSourcePlaceholder {
    struct SoundSourcePlaceholder__Class* klass;
    MonitorData* monitor;
    struct SoundSourcePlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundSourcePlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SoundSourcePlaceholder_FWDDECL
#include <Modloader/app/structs/SoundSourcePlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundSourcePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundSourcePlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SoundSourcePlaceholder_FWDDECL)
#include <Modloader/app/structs/SoundSourcePlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundSourcePlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
