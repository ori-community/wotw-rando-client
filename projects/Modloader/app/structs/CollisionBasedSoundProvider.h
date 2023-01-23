#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionBasedSoundProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionBasedSoundProvider_DEFINED)
#include <Modloader/app/structs/CollisionBasedSoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionBasedSoundProvider_DEFINED
struct CollisionBasedSoundProvider__Class;
struct CollisionBasedSoundProvider {
    struct CollisionBasedSoundProvider__Class* klass;
    MonitorData* monitor;
    struct CollisionBasedSoundProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionBasedSoundProvider_FWDDECL)
#define IL2CPP_STRUCT_CollisionBasedSoundProvider_FWDDECL
#include <Modloader/app/structs/CollisionBasedSoundProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CollisionBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionBasedSoundProvider_DEFINED) && !defined(IL2CPP_STRUCT_CollisionBasedSoundProvider_FWDDECL)
#include <Modloader/app/structs/CollisionBasedSoundProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionBasedSoundProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
