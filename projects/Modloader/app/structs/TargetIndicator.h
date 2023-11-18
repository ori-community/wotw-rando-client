#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetIndicator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetIndicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetIndicator_DEFINED)
#include <Modloader/app/structs/TargetIndicator__Fields.h>
#if defined(IL2CPP_STRUCT_TargetIndicator__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetIndicator_DEFINED
struct TargetIndicator__Class;
struct TargetIndicator {
    struct TargetIndicator__Class* klass;
    MonitorData* monitor;
    struct TargetIndicator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetIndicator_FWDDECL)
#define IL2CPP_STRUCT_TargetIndicator_FWDDECL
#include <Modloader/app/structs/TargetIndicator__Class.h>
#endif
#undef IL2CPP_STRUCT_TargetIndicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetIndicator_DEFINED) && !defined(IL2CPP_STRUCT_TargetIndicator_FWDDECL)
#include <Modloader/app/structs/TargetIndicator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetIndicator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
