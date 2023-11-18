#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_DEFINED
struct __declspec(align(8)) WaapiJsonStopSoundArgs__Fields {
    uint32_t event;
    int32_t actionType;
    int32_t gameObject;
    int32_t transitionDuration;
    int32_t fadeCurve;
};
#endif
#if !defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_FWDDECL)
#include <Modloader/app/structs/WaapiJsonStopSoundArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiJsonStopSoundArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
