#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateGroup_DEFINED)
#include <Modloader/app/structs/PlayerUberStateGroup__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateGroup_DEFINED
struct PlayerUberStateGroup__Class;
struct PlayerUberStateGroup {
    struct PlayerUberStateGroup__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateGroup_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateGroup_FWDDECL
#include <Modloader/app/structs/PlayerUberStateGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateGroup_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateGroup_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
