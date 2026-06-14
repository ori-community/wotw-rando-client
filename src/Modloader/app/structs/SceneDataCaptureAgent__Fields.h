#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_DEFINED
struct Int32__Array;
struct MoonGuid;
struct __declspec(align(8)) SceneDataCaptureAgent__Fields {
    struct Int32__Array* m_sceneCounts;
    struct MoonGuid* m_lastSceneGuid;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MoonGuid.h>
#endif
#undef IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneDataCaptureAgent__Fields_FWDDECL)
#include <Modloader/app/structs/SceneDataCaptureAgent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneDataCaptureAgent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
