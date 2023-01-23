#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceTargetIndicator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceTargetIndicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceTargetIndicator_DEFINED)
#include <Modloader/app/structs/RaceTargetIndicator__Fields.h>
#if defined(IL2CPP_STRUCT_RaceTargetIndicator__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceTargetIndicator_DEFINED
struct RaceTargetIndicator__Class;
struct RaceTargetIndicator {
    struct RaceTargetIndicator__Class* klass;
    MonitorData* monitor;
    struct RaceTargetIndicator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceTargetIndicator_FWDDECL)
#define IL2CPP_STRUCT_RaceTargetIndicator_FWDDECL
#include <Modloader/app/structs/RaceTargetIndicator__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceTargetIndicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceTargetIndicator_DEFINED) && !defined(IL2CPP_STRUCT_RaceTargetIndicator_FWDDECL)
#include <Modloader/app/structs/RaceTargetIndicator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceTargetIndicator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
