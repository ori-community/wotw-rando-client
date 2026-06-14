#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_DEFINED
struct ActionMethod;
struct SoundProvider;
struct Transform;
struct LegacyDiscoverWorldMapAreasAction__Fields {
    struct ActionMethod__Fields _;
    struct ActionMethod* OnClosedAction;
    float FadeDelay;
    float MoveDuration;
    float FadeDuration;
    struct SoundProvider* RevealSound;
    struct Transform* RevealPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyDiscoverWorldMapAreasAction__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyDiscoverWorldMapAreasAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyDiscoverWorldMapAreasAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
