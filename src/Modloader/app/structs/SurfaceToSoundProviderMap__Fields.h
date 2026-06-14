#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_DEFINED
struct Event_1;
struct Trigger;
struct SurfaceToSoundProviderMap__Fields {
    struct MonoBehaviour__Fields _;
    struct Event_1* Event;
    struct Trigger* Trigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/Trigger.h>
#endif
#undef IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceToSoundProviderMap__Fields_FWDDECL)
#include <Modloader/app/structs/SurfaceToSoundProviderMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceToSoundProviderMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
