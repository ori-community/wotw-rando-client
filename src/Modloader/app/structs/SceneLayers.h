#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLayers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLayers_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLayers_DEFINED)
#include <Modloader/app/structs/SceneLayers__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLayers__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLayers_DEFINED
struct SceneLayers__Class;
struct SceneLayers {
    struct SceneLayers__Class* klass;
    MonitorData* monitor;
    struct SceneLayers__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLayers_FWDDECL)
#define IL2CPP_STRUCT_SceneLayers_FWDDECL
#include <Modloader/app/structs/SceneLayers__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLayers_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLayers_DEFINED) && !defined(IL2CPP_STRUCT_SceneLayers_FWDDECL)
#include <Modloader/app/structs/SceneLayers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLayers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
