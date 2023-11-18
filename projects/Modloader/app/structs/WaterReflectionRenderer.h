#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterReflectionRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterReflectionRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterReflectionRenderer_DEFINED)
#include <Modloader/app/structs/WaterReflectionRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_WaterReflectionRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterReflectionRenderer_DEFINED
struct WaterReflectionRenderer__Class;
struct WaterReflectionRenderer {
    struct WaterReflectionRenderer__Class* klass;
    MonitorData* monitor;
    struct WaterReflectionRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterReflectionRenderer_FWDDECL)
#define IL2CPP_STRUCT_WaterReflectionRenderer_FWDDECL
#include <Modloader/app/structs/WaterReflectionRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterReflectionRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterReflectionRenderer_DEFINED) && !defined(IL2CPP_STRUCT_WaterReflectionRenderer_FWDDECL)
#include <Modloader/app/structs/WaterReflectionRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterReflectionRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
