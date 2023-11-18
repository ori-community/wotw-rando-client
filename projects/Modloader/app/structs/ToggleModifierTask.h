#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToggleModifierTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToggleModifierTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleModifierTask_DEFINED)
#include <Modloader/app/structs/ToggleModifierTask__Fields.h>
#if defined(IL2CPP_STRUCT_ToggleModifierTask__Fields_DEFINED)
#define IL2CPP_STRUCT_ToggleModifierTask_DEFINED
struct ToggleModifierTask__Class;
struct ToggleModifierTask {
    struct ToggleModifierTask__Class* klass;
    MonitorData* monitor;
    struct ToggleModifierTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToggleModifierTask_FWDDECL)
#define IL2CPP_STRUCT_ToggleModifierTask_FWDDECL
#include <Modloader/app/structs/ToggleModifierTask__Class.h>
#endif
#undef IL2CPP_STRUCT_ToggleModifierTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleModifierTask_DEFINED) && !defined(IL2CPP_STRUCT_ToggleModifierTask_FWDDECL)
#include <Modloader/app/structs/ToggleModifierTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToggleModifierTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
