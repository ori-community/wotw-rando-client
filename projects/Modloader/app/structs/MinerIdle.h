#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerIdle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerIdle_DEFINED)
#include <Modloader/app/structs/MinerIdle__Fields.h>
#if defined(IL2CPP_STRUCT_MinerIdle__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerIdle_DEFINED
struct MinerIdle__Class;
struct MinerIdle {
    struct MinerIdle__Class* klass;
    MonitorData* monitor;
    struct MinerIdle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerIdle_FWDDECL)
#define IL2CPP_STRUCT_MinerIdle_FWDDECL
#include <Modloader/app/structs/MinerIdle__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerIdle_DEFINED) && !defined(IL2CPP_STRUCT_MinerIdle_FWDDECL)
#include <Modloader/app/structs/MinerIdle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerIdle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
