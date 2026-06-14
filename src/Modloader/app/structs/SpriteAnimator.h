#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimator_DEFINED)
#include <Modloader/app/structs/SpriteAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteAnimator_DEFINED
struct SpriteAnimator__Class;
struct SpriteAnimator {
    struct SpriteAnimator__Class* klass;
    MonitorData* monitor;
    struct SpriteAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAnimator_FWDDECL)
#define IL2CPP_STRUCT_SpriteAnimator_FWDDECL
#include <Modloader/app/structs/SpriteAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimator_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAnimator_FWDDECL)
#include <Modloader/app/structs/SpriteAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
