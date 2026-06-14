#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMeshingSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMeshingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMeshingSettings_DEFINED)
#include <Modloader/app/structs/AnimationMeshingSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationMeshingSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationMeshingSettings_DEFINED
struct AnimationMeshingSettings__Class;
struct AnimationMeshingSettings {
    struct AnimationMeshingSettings__Class* klass;
    MonitorData* monitor;
    struct AnimationMeshingSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMeshingSettings_FWDDECL)
#define IL2CPP_STRUCT_AnimationMeshingSettings_FWDDECL
#include <Modloader/app/structs/AnimationMeshingSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationMeshingSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMeshingSettings_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMeshingSettings_FWDDECL)
#include <Modloader/app/structs/AnimationMeshingSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMeshingSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
