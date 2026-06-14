#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplaySoundParameterMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplaySoundParameterMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySoundParameterMap_DEFINED)
#include <Modloader/app/structs/GameplaySoundParameterMap__Fields.h>
#if defined(IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_DEFINED)
#define IL2CPP_STRUCT_GameplaySoundParameterMap_DEFINED
struct GameplaySoundParameterMap__Class;
struct GameplaySoundParameterMap {
    struct GameplaySoundParameterMap__Class* klass;
    MonitorData* monitor;
    struct GameplaySoundParameterMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplaySoundParameterMap_FWDDECL)
#define IL2CPP_STRUCT_GameplaySoundParameterMap_FWDDECL
#include <Modloader/app/structs/GameplaySoundParameterMap__Class.h>
#endif
#undef IL2CPP_STRUCT_GameplaySoundParameterMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySoundParameterMap_DEFINED) && !defined(IL2CPP_STRUCT_GameplaySoundParameterMap_FWDDECL)
#include <Modloader/app/structs/GameplaySoundParameterMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplaySoundParameterMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
