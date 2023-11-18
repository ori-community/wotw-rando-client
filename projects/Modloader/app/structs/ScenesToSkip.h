#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesToSkip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesToSkip_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesToSkip_DEFINED)
#include <Modloader/app/structs/ScenesToSkip__Fields.h>
#if defined(IL2CPP_STRUCT_ScenesToSkip__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenesToSkip_DEFINED
struct ScenesToSkip__Class;
struct ScenesToSkip {
    struct ScenesToSkip__Class* klass;
    MonitorData* monitor;
    struct ScenesToSkip__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesToSkip_FWDDECL)
#define IL2CPP_STRUCT_ScenesToSkip_FWDDECL
#include <Modloader/app/structs/ScenesToSkip__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenesToSkip_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesToSkip_DEFINED) && !defined(IL2CPP_STRUCT_ScenesToSkip_FWDDECL)
#include <Modloader/app/structs/ScenesToSkip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesToSkip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
