#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundAnimatorEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAnimatorEntity_DEFINED)
#include <Modloader/app/structs/SoundAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SoundAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundAnimatorEntity_DEFINED
struct SoundAnimatorEntity__Class;
struct SoundAnimatorEntity {
    struct SoundAnimatorEntity__Class* klass;
    MonitorData* monitor;
    struct SoundAnimatorEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundAnimatorEntity_FWDDECL)
#define IL2CPP_STRUCT_SoundAnimatorEntity_FWDDECL
#include <Modloader/app/structs/SoundAnimatorEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundAnimatorEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAnimatorEntity_DEFINED) && !defined(IL2CPP_STRUCT_SoundAnimatorEntity_FWDDECL)
#include <Modloader/app/structs/SoundAnimatorEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundAnimatorEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
