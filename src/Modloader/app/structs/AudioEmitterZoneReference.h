#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioEmitterZoneReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioEmitterZoneReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioEmitterZoneReference_DEFINED)
#define IL2CPP_STRUCT_AudioEmitterZoneReference_DEFINED
struct AudioEmitterZone;
struct AudioEmitterZoneReference {
    struct AudioEmitterZone* _Zone_k__BackingField;
    int32_t _ZoneInstanceId_k__BackingField;
    int64_t _Version_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_AudioEmitterZoneReference_FWDDECL)
#define IL2CPP_STRUCT_AudioEmitterZoneReference_FWDDECL
#include <Modloader/app/structs/AudioEmitterZone.h>
#endif
#undef IL2CPP_STRUCT_AudioEmitterZoneReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioEmitterZoneReference_DEFINED) && !defined(IL2CPP_STRUCT_AudioEmitterZoneReference_FWDDECL)
#include <Modloader/app/structs/AudioEmitterZoneReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioEmitterZoneReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
