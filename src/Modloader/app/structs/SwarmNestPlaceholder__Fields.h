#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_DEFINED
struct SwarmPlaceholder;
struct MeshRenderer;
struct SwarmNestEntity;
struct SwarmNestPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct SwarmPlaceholder* SwarmPlaceholder;
    struct MeshRenderer* GraphicMeshRenderer;
    float SpawnSwarmAgentTimeout;
    float FollowOriRadius;
    struct SwarmNestEntity* m_entity;
    bool m_spawned;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/SwarmNestEntity.h>
#include <Modloader/app/structs/SwarmPlaceholder.h>
#endif
#undef IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmNestPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmNestPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmNestPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
