#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionCheckerPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionCheckerPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionCheckerPlugin_DEFINED)
#include <Modloader/app/structs/PositionCheckerPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_PositionCheckerPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionCheckerPlugin_DEFINED
struct PositionCheckerPlugin__Class;
struct PositionCheckerPlugin {
    struct PositionCheckerPlugin__Class* klass;
    MonitorData* monitor;
    struct PositionCheckerPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionCheckerPlugin_FWDDECL)
#define IL2CPP_STRUCT_PositionCheckerPlugin_FWDDECL
#include <Modloader/app/structs/PositionCheckerPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionCheckerPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionCheckerPlugin_DEFINED) && !defined(IL2CPP_STRUCT_PositionCheckerPlugin_FWDDECL)
#include <Modloader/app/structs/PositionCheckerPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionCheckerPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
