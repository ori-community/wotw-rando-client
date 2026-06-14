#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateBool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateBool_DEFINED)
#include <Modloader/app/structs/DesiredUberStateBool__Fields.h>
#if defined(IL2CPP_STRUCT_DesiredUberStateBool__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateBool_DEFINED
struct DesiredUberStateBool__Class;
struct DesiredUberStateBool {
    struct DesiredUberStateBool__Class* klass;
    MonitorData* monitor;
    struct DesiredUberStateBool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateBool_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateBool_FWDDECL
#include <Modloader/app/structs/DesiredUberStateBool__Class.h>
#endif
#undef IL2CPP_STRUCT_DesiredUberStateBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateBool_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateBool_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateBool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateBool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
