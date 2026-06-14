#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkinnedMeshLod__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkinnedMeshLod__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinnedMeshLod__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SkinnedMeshLod__Fields_DEFINED
struct SkinnedMeshRenderer__Array;
struct Transform__Array;
struct List_1_UnityEngine_GameObject_;
struct SkinnedMeshLod__Fields {
    struct MonoBehaviour__Fields _;
    struct SkinnedMeshRenderer__Array* m_activeRenderers;
    struct Transform__Array* m_children;
    int32_t m_currentLevel;
    struct List_1_UnityEngine_GameObject_* LodLevelRigs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkinnedMeshLod__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkinnedMeshLod__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_SkinnedMeshLod__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinnedMeshLod__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkinnedMeshLod__Fields_FWDDECL)
#include <Modloader/app/structs/SkinnedMeshLod__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkinnedMeshLod__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
