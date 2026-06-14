#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioListenerZoneReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioListenerZoneReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListenerZoneReference_DEFINED)
#define IL2CPP_STRUCT_AudioListenerZoneReference_DEFINED
struct AudioListenerZone;
struct AudioListenerZoneReference {
    struct AudioListenerZone* Zone;
    int64_t Version;
    int32_t ZoneInstanceId;
};
#endif
#if !defined(IL2CPP_STRUCT_AudioListenerZoneReference_FWDDECL)
#define IL2CPP_STRUCT_AudioListenerZoneReference_FWDDECL
#include <Modloader/app/structs/AudioListenerZone.h>
#endif
#undef IL2CPP_STRUCT_AudioListenerZoneReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioListenerZoneReference_DEFINED) && !defined(IL2CPP_STRUCT_AudioListenerZoneReference_FWDDECL)
#include <Modloader/app/structs/AudioListenerZoneReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioListenerZoneReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
