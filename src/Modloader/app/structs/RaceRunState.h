#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceRunState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceRunState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRunState_DEFINED)
#include <Modloader/app/structs/RaceRunState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceRunState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceRunState_DEFINED
struct RaceRunState__Class;
struct RaceRunState {
    struct RaceRunState__Class* klass;
    MonitorData* monitor;
    struct RaceRunState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceRunState_FWDDECL)
#define IL2CPP_STRUCT_RaceRunState_FWDDECL
#include <Modloader/app/structs/RaceRunState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceRunState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRunState_DEFINED) && !defined(IL2CPP_STRUCT_RaceRunState_FWDDECL)
#include <Modloader/app/structs/RaceRunState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceRunState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
