#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StormZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StormZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StormZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StormZone__Fields_DEFINED
struct StormZone_SoundSource;
struct StormZone__Fields {
    struct MonoBehaviour__Fields _;
    float QuietDuration;
    float AnticipationDuration;
    float StormDuration;
    bool Active;
    struct StormZone_SoundSource* Quiet;
    struct StormZone_SoundSource* Anticipation;
    struct StormZone_SoundSource* Storm;
    float m_currentTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StormZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_StormZone__Fields_FWDDECL
#include <Modloader/app/structs/StormZone_SoundSource.h>
#endif
#undef IL2CPP_STRUCT_StormZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StormZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StormZone__Fields_FWDDECL)
#include <Modloader/app/structs/StormZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StormZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
