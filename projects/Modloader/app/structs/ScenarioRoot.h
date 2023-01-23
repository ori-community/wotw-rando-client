#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenarioRoot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenarioRoot_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioRoot_DEFINED)
#include <Modloader/app/structs/ScenarioRoot__Fields.h>
#if defined(IL2CPP_STRUCT_ScenarioRoot__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenarioRoot_DEFINED
struct ScenarioRoot__Class;
struct ScenarioRoot {
    struct ScenarioRoot__Class* klass;
    MonitorData* monitor;
    struct ScenarioRoot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenarioRoot_FWDDECL)
#define IL2CPP_STRUCT_ScenarioRoot_FWDDECL
#include <Modloader/app/structs/ScenarioRoot__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenarioRoot_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenarioRoot_DEFINED) && !defined(IL2CPP_STRUCT_ScenarioRoot_FWDDECL)
#include <Modloader/app/structs/ScenarioRoot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenarioRoot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
