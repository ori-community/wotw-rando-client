#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_DEFINED)
#include <Modloader/app/structs/GameObjectVirtualAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_DEFINED
struct ICameraInfluencer;
struct CameraZoneVirtualAnimator__Fields {
    struct GameObjectVirtualAnimator__Fields _;
    struct ICameraInfluencer* _Influencer_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_FWDDECL
#include <Modloader/app/structs/ICameraInfluencer.h>
#endif
#undef IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraZoneVirtualAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/CameraZoneVirtualAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraZoneVirtualAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
