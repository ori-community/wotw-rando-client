#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StickToMovingPlatforms__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StickToMovingPlatforms__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickToMovingPlatforms__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_StickToMovingPlatforms__Fields_DEFINED
struct Transform;
struct StickToMovingPlatforms__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* m_ground;
    struct Matrix4x4 m_groundMatrix;
    int32_t m_keepTracking;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StickToMovingPlatforms__Fields_FWDDECL)
#define IL2CPP_STRUCT_StickToMovingPlatforms__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_StickToMovingPlatforms__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickToMovingPlatforms__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StickToMovingPlatforms__Fields_FWDDECL)
#include <Modloader/app/structs/StickToMovingPlatforms__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StickToMovingPlatforms__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
