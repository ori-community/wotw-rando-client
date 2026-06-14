#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetSpriteAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetSpriteAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetSpriteAnimator_DEFINED)
#include <Modloader/app/structs/SetSpriteAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_SetSpriteAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SetSpriteAnimator_DEFINED
struct SetSpriteAnimator__Class;
struct SetSpriteAnimator {
    struct SetSpriteAnimator__Class* klass;
    MonitorData* monitor;
    struct SetSpriteAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetSpriteAnimator_FWDDECL)
#define IL2CPP_STRUCT_SetSpriteAnimator_FWDDECL
#include <Modloader/app/structs/SetSpriteAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_SetSpriteAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetSpriteAnimator_DEFINED) && !defined(IL2CPP_STRUCT_SetSpriteAnimator_FWDDECL)
#include <Modloader/app/structs/SetSpriteAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetSpriteAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
