#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapTrigger_DEFINED)
#include <Modloader/app/structs/SnapTrapTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_SnapTrapTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapTrigger_DEFINED
struct SnapTrapTrigger__Class;
struct SnapTrapTrigger {
    struct SnapTrapTrigger__Class* klass;
    MonitorData* monitor;
    struct SnapTrapTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapTrigger_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapTrigger_FWDDECL
#include <Modloader/app/structs/SnapTrapTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapTrigger_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapTrigger_FWDDECL)
#include <Modloader/app/structs/SnapTrapTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
