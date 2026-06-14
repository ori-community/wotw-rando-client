#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_DEFINED)
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#if defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED)
#define IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_DEFINED
struct Transform;
struct MaterialBasedResourceMap;
struct MoonTimeline;
struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_;
struct __declspec(align(8)) SurfaceMaterialTimelinePlayer__Fields {
    struct Transform* VFXHolder;
    struct MaterialBasedResourceMap* EffectsMap;
    struct MoonTimeline* m_currentVFX;
    SurfaceMaterialType__Enum m_currentSurfaceMaterial;

    struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_* m_vfx;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceMaterialTimelinePlayer__Fields_FWDDECL)
#include <Modloader/app/structs/SurfaceMaterialTimelinePlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceMaterialTimelinePlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
