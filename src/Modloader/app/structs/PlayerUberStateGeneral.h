#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateGeneral_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateGeneral_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateGeneral_DEFINED)
#include <Modloader/app/structs/PlayerUberStateGeneral__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateGeneral__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateGeneral_DEFINED
struct PlayerUberStateGeneral__Class;
struct PlayerUberStateGeneral {
    struct PlayerUberStateGeneral__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateGeneral__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateGeneral_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateGeneral_FWDDECL
#include <Modloader/app/structs/PlayerUberStateGeneral__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateGeneral_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateGeneral_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateGeneral_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateGeneral.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateGeneral.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
