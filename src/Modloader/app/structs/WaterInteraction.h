#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterInteraction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterInteraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterInteraction_DEFINED)
#include <Modloader/app/structs/WaterInteraction__Fields.h>
#if defined(IL2CPP_STRUCT_WaterInteraction__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterInteraction_DEFINED
struct WaterInteraction__Class;
struct WaterInteraction {
    struct WaterInteraction__Class* klass;
    MonitorData* monitor;
    struct WaterInteraction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterInteraction_FWDDECL)
#define IL2CPP_STRUCT_WaterInteraction_FWDDECL
#include <Modloader/app/structs/WaterInteraction__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterInteraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterInteraction_DEFINED) && !defined(IL2CPP_STRUCT_WaterInteraction_FWDDECL)
#include <Modloader/app/structs/WaterInteraction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterInteraction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
