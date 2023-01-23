#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_DEFINED)
#include <Modloader/app/structs/SoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_DEFINED
struct List_1_CollisionMaterialSoundPair_;
struct AnimationCurve;
struct CollisionBasedSoundProvider__Fields {
    struct SoundProvider__Fields _;
    struct List_1_CollisionMaterialSoundPair_* SoundPairs;
    struct AnimationCurve* ForceToVolumeCurve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/List_1_CollisionMaterialSoundPair_.h>
#endif
#undef IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollisionBasedSoundProvider__Fields_FWDDECL)
#include <Modloader/app/structs/CollisionBasedSoundProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionBasedSoundProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
