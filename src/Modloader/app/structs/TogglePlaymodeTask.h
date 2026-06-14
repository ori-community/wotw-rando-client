#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TogglePlaymodeTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TogglePlaymodeTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TogglePlaymodeTask_DEFINED)
#include <Modloader/app/structs/TogglePlaymodeTask__Fields.h>
#if defined(IL2CPP_STRUCT_TogglePlaymodeTask__Fields_DEFINED)
#define IL2CPP_STRUCT_TogglePlaymodeTask_DEFINED
struct TogglePlaymodeTask__Class;
struct TogglePlaymodeTask {
    struct TogglePlaymodeTask__Class* klass;
    MonitorData* monitor;
    struct TogglePlaymodeTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TogglePlaymodeTask_FWDDECL)
#define IL2CPP_STRUCT_TogglePlaymodeTask_FWDDECL
#include <Modloader/app/structs/TogglePlaymodeTask__Class.h>
#endif
#undef IL2CPP_STRUCT_TogglePlaymodeTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TogglePlaymodeTask_DEFINED) && !defined(IL2CPP_STRUCT_TogglePlaymodeTask_FWDDECL)
#include <Modloader/app/structs/TogglePlaymodeTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TogglePlaymodeTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
