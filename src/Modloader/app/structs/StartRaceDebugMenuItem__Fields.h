#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_DEFINED)
#include <Modloader/app/structs/IntDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_IntDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_DEFINED
struct String;
struct RuntimeSceneMetaData;
struct StartRaceDebugMenuItem__Fields {
    struct IntDebugMenuItem__Fields _;
    struct String* m_name;
    float m_holdTimer;
    struct RuntimeSceneMetaData* m_raceSceneMetaData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_FWDDECL
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StartRaceDebugMenuItem__Fields_FWDDECL)
#include <Modloader/app/structs/StartRaceDebugMenuItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartRaceDebugMenuItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
