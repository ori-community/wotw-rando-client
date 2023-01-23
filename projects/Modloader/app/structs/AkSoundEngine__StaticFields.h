#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSoundEngine__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSoundEngine__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSoundEngine__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AkSoundEngine__StaticFields_DEFINED
struct AkSoundEngine_GameObjectHashFunction;
struct HashSet_1_System_UInt64_;
struct AkSoundEngine__StaticFields {
    struct AkSoundEngine_GameObjectHashFunction* gameObjectHash;
    struct HashSet_1_System_UInt64_* RegisteredGameObjects;
};
#endif
#if !defined(IL2CPP_STRUCT_AkSoundEngine__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AkSoundEngine__StaticFields_FWDDECL
#include <Modloader/app/structs/AkSoundEngine_GameObjectHashFunction.h>
#include <Modloader/app/structs/HashSet_1_System_UInt64_.h>
#endif
#undef IL2CPP_STRUCT_AkSoundEngine__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSoundEngine__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AkSoundEngine__StaticFields_FWDDECL)
#include <Modloader/app/structs/AkSoundEngine__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSoundEngine__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
