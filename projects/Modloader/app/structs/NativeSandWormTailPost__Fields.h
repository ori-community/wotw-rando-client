#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeSandWormTailPost__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeSandWormTailPost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeSandWormTailPost__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeSandWormTailPost__Fields_DEFINED
struct SandWormTailPost__Array;
struct SnakeAnimator;
struct SandWormEntity;
struct NativeSandWormTailPost__Fields {
    struct MonoBehaviour__Fields _;
    struct SandWormTailPost__Array* LegacyPosts;
    struct SnakeAnimator* SnakeAnimator;
    struct SandWormEntity* SandWorm;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeSandWormTailPost__Fields_FWDDECL)
#define IL2CPP_STRUCT_NativeSandWormTailPost__Fields_FWDDECL
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormTailPost__Array.h>
#include <Modloader/app/structs/SnakeAnimator.h>
#endif
#undef IL2CPP_STRUCT_NativeSandWormTailPost__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeSandWormTailPost__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NativeSandWormTailPost__Fields_FWDDECL)
#include <Modloader/app/structs/NativeSandWormTailPost__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeSandWormTailPost__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
