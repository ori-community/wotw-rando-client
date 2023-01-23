#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlsScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlsScreen_DEFINED)
#include <Modloader/app/structs/ControlsScreen__Fields.h>
#if defined(IL2CPP_STRUCT_ControlsScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlsScreen_DEFINED
struct ControlsScreen__Class;
struct ControlsScreen {
    struct ControlsScreen__Class* klass;
    MonitorData* monitor;
    struct ControlsScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlsScreen_FWDDECL)
#define IL2CPP_STRUCT_ControlsScreen_FWDDECL
#include <Modloader/app/structs/ControlsScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_ControlsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlsScreen_DEFINED) && !defined(IL2CPP_STRUCT_ControlsScreen_FWDDECL)
#include <Modloader/app/structs/ControlsScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlsScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
