#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupStateModifierData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupStateModifierData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifierData_DEFINED)
#include <Modloader/app/structs/SetupStateModifierData__Fields.h>
#if defined(IL2CPP_STRUCT_SetupStateModifierData__Fields_DEFINED)
#define IL2CPP_STRUCT_SetupStateModifierData_DEFINED
struct SetupStateModifierData__Class;
struct SetupStateModifierData {
    struct SetupStateModifierData__Class* klass;
    MonitorData* monitor;
    struct SetupStateModifierData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetupStateModifierData_FWDDECL)
#define IL2CPP_STRUCT_SetupStateModifierData_FWDDECL
#include <Modloader/app/structs/SetupStateModifierData__Class.h>
#endif
#undef IL2CPP_STRUCT_SetupStateModifierData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateModifierData_DEFINED) && !defined(IL2CPP_STRUCT_SetupStateModifierData_FWDDECL)
#include <Modloader/app/structs/SetupStateModifierData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupStateModifierData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
