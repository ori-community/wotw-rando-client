#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_DEFINED)
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry.h>
#if defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_DEFINED)
#define IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_DEFINED
struct PreRecordingDynamicSceneObjectEntry__Array__Class;
struct PreRecordingDynamicSceneObjectEntry__Array {
    struct PreRecordingDynamicSceneObjectEntry__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct PreRecordingDynamicSceneObjectEntry vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_FWDDECL)
#define IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_FWDDECL
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_DEFINED) && !defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry__Array_FWDDECL)
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
