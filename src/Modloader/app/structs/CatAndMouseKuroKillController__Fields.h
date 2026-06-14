#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_DEFINED
struct GameObject;
struct SoundProvider;
struct CatAndMouseKuroLandZone__Array;
struct CatAndMouseKuroKillController__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* KuroFlyAttack;
    struct SoundProvider* LandKillSound;
    struct SoundProvider* FlyKillSound;
    struct CatAndMouseKuroLandZone__Array* m_zones;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_FWDDECL
#include <Modloader/app/structs/CatAndMouseKuroLandZone__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatAndMouseKuroKillController__Fields_FWDDECL)
#include <Modloader/app/structs/CatAndMouseKuroKillController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatAndMouseKuroKillController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
