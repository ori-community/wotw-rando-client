#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceBaseState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceBaseState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceBaseState_DEFINED)
#include <Modloader/app/structs/RaceBaseState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceBaseState_DEFINED
struct RaceBaseState__Class;
struct RaceBaseState {
    struct RaceBaseState__Class* klass;
    MonitorData* monitor;
    struct RaceBaseState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceBaseState_FWDDECL)
#define IL2CPP_STRUCT_RaceBaseState_FWDDECL
#include <Modloader/app/structs/RaceBaseState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceBaseState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceBaseState_DEFINED) && !defined(IL2CPP_STRUCT_RaceBaseState_FWDDECL)
#include <Modloader/app/structs/RaceBaseState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceBaseState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
