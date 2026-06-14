#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerConnectionInternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerConnectionInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnectionInternal_DEFINED)
#define IL2CPP_STRUCT_PlayerConnectionInternal_DEFINED
struct PlayerConnectionInternal__Class;
struct PlayerConnectionInternal {
    struct PlayerConnectionInternal__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerConnectionInternal_FWDDECL)
#define IL2CPP_STRUCT_PlayerConnectionInternal_FWDDECL
#include <Modloader/app/structs/PlayerConnectionInternal__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerConnectionInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnectionInternal_DEFINED) && !defined(IL2CPP_STRUCT_PlayerConnectionInternal_FWDDECL)
#include <Modloader/app/structs/PlayerConnectionInternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerConnectionInternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
