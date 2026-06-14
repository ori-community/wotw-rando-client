#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceProximityAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceProximityAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceProximityAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceProximityAction__Fields_DEFINED
struct RaceHandler;
struct RaceProximityAction__Fields {
    struct ActionMethod__Fields _;
    struct RaceHandler* m_raceHandler;
    bool m_inProximity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceProximityAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceProximityAction__Fields_FWDDECL
#include <Modloader/app/structs/RaceHandler.h>
#endif
#undef IL2CPP_STRUCT_RaceProximityAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceProximityAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceProximityAction__Fields_FWDDECL)
#include <Modloader/app/structs/RaceProximityAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceProximityAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
