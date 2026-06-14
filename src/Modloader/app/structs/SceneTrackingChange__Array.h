#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneTrackingChange__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneTrackingChange__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTrackingChange__Array_DEFINED)
#define IL2CPP_STRUCT_SceneTrackingChange__Array_DEFINED
struct SceneTrackingChange__Array__Class;
struct SceneTrackingChange;
struct SceneTrackingChange__Array {
    struct SceneTrackingChange__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SceneTrackingChange* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_SceneTrackingChange__Array_FWDDECL)
#define IL2CPP_STRUCT_SceneTrackingChange__Array_FWDDECL
#include <Modloader/app/structs/SceneTrackingChange.h>
#include <Modloader/app/structs/SceneTrackingChange__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneTrackingChange__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTrackingChange__Array_DEFINED) && !defined(IL2CPP_STRUCT_SceneTrackingChange__Array_FWDDECL)
#include <Modloader/app/structs/SceneTrackingChange__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneTrackingChange__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
