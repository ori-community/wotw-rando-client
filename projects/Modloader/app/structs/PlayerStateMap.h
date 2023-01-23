#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerStateMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStateMap_DEFINED)
#include <Modloader/app/structs/PlayerStateMap__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerStateMap__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerStateMap_DEFINED
struct PlayerStateMap__Class;
struct PlayerStateMap {
    struct PlayerStateMap__Class* klass;
    MonitorData* monitor;
    struct PlayerStateMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerStateMap_FWDDECL)
#define IL2CPP_STRUCT_PlayerStateMap_FWDDECL
#include <Modloader/app/structs/PlayerStateMap__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerStateMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerStateMap_DEFINED) && !defined(IL2CPP_STRUCT_PlayerStateMap_FWDDECL)
#include <Modloader/app/structs/PlayerStateMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerStateMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
