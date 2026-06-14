#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrailModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrailModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrailModifier_DEFINED)
#include <Modloader/app/structs/MeshTrailModifier__Fields.h>
#if defined(IL2CPP_STRUCT_MeshTrailModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_MeshTrailModifier_DEFINED
struct MeshTrailModifier__Class;
struct MeshTrailModifier {
    struct MeshTrailModifier__Class* klass;
    MonitorData* monitor;
    struct MeshTrailModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrailModifier_FWDDECL)
#define IL2CPP_STRUCT_MeshTrailModifier_FWDDECL
#include <Modloader/app/structs/MeshTrailModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_MeshTrailModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrailModifier_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrailModifier_FWDDECL)
#include <Modloader/app/structs/MeshTrailModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrailModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
