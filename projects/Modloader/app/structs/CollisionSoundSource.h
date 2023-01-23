#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionSoundSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionSoundSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionSoundSource_DEFINED)
#include <Modloader/app/structs/CollisionSoundSource__Fields.h>
#if defined(IL2CPP_STRUCT_CollisionSoundSource__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionSoundSource_DEFINED
struct CollisionSoundSource__Class;
struct CollisionSoundSource {
    struct CollisionSoundSource__Class* klass;
    MonitorData* monitor;
    struct CollisionSoundSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionSoundSource_FWDDECL)
#define IL2CPP_STRUCT_CollisionSoundSource_FWDDECL
#include <Modloader/app/structs/CollisionSoundSource__Class.h>
#endif
#undef IL2CPP_STRUCT_CollisionSoundSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionSoundSource_DEFINED) && !defined(IL2CPP_STRUCT_CollisionSoundSource_FWDDECL)
#include <Modloader/app/structs/CollisionSoundSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionSoundSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
