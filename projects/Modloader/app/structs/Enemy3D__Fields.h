#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enemy3D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enemy3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enemy3D__Fields_DEFINED)
#include <Modloader/app/structs/Enemy__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy__Fields_DEFINED)
#define IL2CPP_STRUCT_Enemy3D__Fields_DEFINED
struct Animator;
struct Transform;
struct Enemy3D__Fields {
    struct Enemy__Fields _;
    struct Animator* Animator;
    struct Transform* Direction;
    bool m_faceLeft;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Enemy3D__Fields_FWDDECL)
#define IL2CPP_STRUCT_Enemy3D__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Enemy3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enemy3D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Enemy3D__Fields_FWDDECL)
#include <Modloader/app/structs/Enemy3D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enemy3D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
