#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerChaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerChaseBehaviour_DEFINED)
#include <Modloader/app/structs/MinerChaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MinerChaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerChaseBehaviour_DEFINED
struct MinerChaseBehaviour__Class;
struct MinerChaseBehaviour {
    struct MinerChaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct MinerChaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerChaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MinerChaseBehaviour_FWDDECL
#include <Modloader/app/structs/MinerChaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerChaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MinerChaseBehaviour_FWDDECL)
#include <Modloader/app/structs/MinerChaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerChaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
