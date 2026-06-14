#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCullingComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCullingComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCullingComparer_DEFINED)
#define IL2CPP_STRUCT_LightCullingComparer_DEFINED
struct LightCullingComparer__Class;
struct LightCullingComparer {
    struct LightCullingComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCullingComparer_FWDDECL)
#define IL2CPP_STRUCT_LightCullingComparer_FWDDECL
#include <Modloader/app/structs/LightCullingComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_LightCullingComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCullingComparer_DEFINED) && !defined(IL2CPP_STRUCT_LightCullingComparer_FWDDECL)
#include <Modloader/app/structs/LightCullingComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCullingComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
