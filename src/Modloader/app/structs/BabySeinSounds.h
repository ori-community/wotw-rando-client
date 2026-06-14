#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySeinSounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySeinSounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinSounds_DEFINED)
#include <Modloader/app/structs/BabySeinSounds__Fields.h>
#if defined(IL2CPP_STRUCT_BabySeinSounds__Fields_DEFINED)
#define IL2CPP_STRUCT_BabySeinSounds_DEFINED
struct BabySeinSounds__Class;
struct BabySeinSounds {
    struct BabySeinSounds__Class* klass;
    MonitorData* monitor;
    struct BabySeinSounds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySeinSounds_FWDDECL)
#define IL2CPP_STRUCT_BabySeinSounds_FWDDECL
#include <Modloader/app/structs/BabySeinSounds__Class.h>
#endif
#undef IL2CPP_STRUCT_BabySeinSounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinSounds_DEFINED) && !defined(IL2CPP_STRUCT_BabySeinSounds_FWDDECL)
#include <Modloader/app/structs/BabySeinSounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySeinSounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
