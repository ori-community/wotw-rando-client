#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_DEFINED
struct SoundProvider;
struct __declspec(align(8)) CollisionMaterialSoundPair__Fields {
    struct Vector2 Normal;
    float CosAngle;
    struct SoundProvider* IndependantSoundProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollisionMaterialSoundPair__Fields_FWDDECL)
#include <Modloader/app/structs/CollisionMaterialSoundPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionMaterialSoundPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
