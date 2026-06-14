#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCullingSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCullingSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCullingSystem_DEFINED)
#include <Modloader/app/structs/LightCullingSystem__Fields.h>
#if defined(IL2CPP_STRUCT_LightCullingSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_LightCullingSystem_DEFINED
struct LightCullingSystem__Class;
struct LightCullingSystem {
    struct LightCullingSystem__Class* klass;
    MonitorData* monitor;
    struct LightCullingSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCullingSystem_FWDDECL)
#define IL2CPP_STRUCT_LightCullingSystem_FWDDECL
#include <Modloader/app/structs/LightCullingSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_LightCullingSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCullingSystem_DEFINED) && !defined(IL2CPP_STRUCT_LightCullingSystem_FWDDECL)
#include <Modloader/app/structs/LightCullingSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCullingSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
