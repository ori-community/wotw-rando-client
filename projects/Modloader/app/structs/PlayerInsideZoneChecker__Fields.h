#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_DEFINED)
#include <Modloader/app/structs/ObjectInsideZoneChecker__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_DEFINED
struct PlayerInsideZoneChecker__Fields {
    struct ObjectInsideZoneChecker__Fields _;
    bool OnlyTriggerIfGrounded;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInsideZoneChecker__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerInsideZoneChecker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInsideZoneChecker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
