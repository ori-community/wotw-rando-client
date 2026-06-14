#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TileAnimationData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TileAnimationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TileAnimationData_DEFINED)
#define IL2CPP_STRUCT_TileAnimationData_DEFINED
struct Sprite__Array;
struct TileAnimationData {
    struct Sprite__Array* m_AnimatedSprites;
    float m_AnimationSpeed;
    float m_AnimationStartTime;
};
#endif
#if !defined(IL2CPP_STRUCT_TileAnimationData_FWDDECL)
#define IL2CPP_STRUCT_TileAnimationData_FWDDECL
#include <Modloader/app/structs/Sprite__Array.h>
#endif
#undef IL2CPP_STRUCT_TileAnimationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TileAnimationData_DEFINED) && !defined(IL2CPP_STRUCT_TileAnimationData_FWDDECL)
#include <Modloader/app/structs/TileAnimationData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TileAnimationData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
