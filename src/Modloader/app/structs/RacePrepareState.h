#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RacePrepareState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RacePrepareState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacePrepareState_DEFINED)
#include <Modloader/app/structs/RacePrepareState__Fields.h>
#if defined(IL2CPP_STRUCT_RacePrepareState__Fields_DEFINED)
#define IL2CPP_STRUCT_RacePrepareState_DEFINED
struct RacePrepareState__Class;
struct RacePrepareState {
    struct RacePrepareState__Class* klass;
    MonitorData* monitor;
    struct RacePrepareState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RacePrepareState_FWDDECL)
#define IL2CPP_STRUCT_RacePrepareState_FWDDECL
#include <Modloader/app/structs/RacePrepareState__Class.h>
#endif
#undef IL2CPP_STRUCT_RacePrepareState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacePrepareState_DEFINED) && !defined(IL2CPP_STRUCT_RacePrepareState_FWDDECL)
#include <Modloader/app/structs/RacePrepareState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RacePrepareState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
