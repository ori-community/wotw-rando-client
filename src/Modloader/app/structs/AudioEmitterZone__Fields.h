#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioEmitterZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioEmitterZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioEmitterZone__Fields_DEFINED)
#include <Modloader/app/structs/AudioZoneShape__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AudioZoneShape__Enum_DEFINED)
#define IL2CPP_STRUCT_AudioEmitterZone__Fields_DEFINED
struct AudioEmitterZone__Fields {
    struct MonoBehaviour__Fields _;
    int64_t _Version_k__BackingField;
    bool _IsActive_k__BackingField;
    AudioZoneShape__Enum ZoneShape;

    bool IsMoving;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioEmitterZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_AudioEmitterZone__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AudioEmitterZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioEmitterZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AudioEmitterZone__Fields_FWDDECL)
#include <Modloader/app/structs/AudioEmitterZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioEmitterZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
