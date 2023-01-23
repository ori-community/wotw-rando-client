#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NaruSounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NaruSounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruSounds_DEFINED)
#include <Modloader/app/structs/NaruSounds__Fields.h>
#if defined(IL2CPP_STRUCT_NaruSounds__Fields_DEFINED)
#define IL2CPP_STRUCT_NaruSounds_DEFINED
struct NaruSounds__Class;
struct NaruSounds {
    struct NaruSounds__Class* klass;
    MonitorData* monitor;
    struct NaruSounds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NaruSounds_FWDDECL)
#define IL2CPP_STRUCT_NaruSounds_FWDDECL
#include <Modloader/app/structs/NaruSounds__Class.h>
#endif
#undef IL2CPP_STRUCT_NaruSounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruSounds_DEFINED) && !defined(IL2CPP_STRUCT_NaruSounds_FWDDECL)
#include <Modloader/app/structs/NaruSounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NaruSounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
