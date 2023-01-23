#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLayers_Layer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLayers_Layer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLayers_Layer_DEFINED)
#include <Modloader/app/structs/SceneLayers_Layer__Fields.h>
#if defined(IL2CPP_STRUCT_SceneLayers_Layer__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLayers_Layer_DEFINED
struct SceneLayers_Layer__Class;
struct SceneLayers_Layer {
    struct SceneLayers_Layer__Class* klass;
    MonitorData* monitor;
    struct SceneLayers_Layer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLayers_Layer_FWDDECL)
#define IL2CPP_STRUCT_SceneLayers_Layer_FWDDECL
#include <Modloader/app/structs/SceneLayers_Layer__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLayers_Layer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLayers_Layer_DEFINED) && !defined(IL2CPP_STRUCT_SceneLayers_Layer_FWDDECL)
#include <Modloader/app/structs/SceneLayers_Layer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLayers_Layer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
