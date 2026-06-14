#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAnimatorAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAnimatorAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorAction_DEFINED)
#include <Modloader/app/structs/SpriteAnimatorAction__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteAnimatorAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteAnimatorAction_DEFINED
struct SpriteAnimatorAction__Class;
struct SpriteAnimatorAction {
    struct SpriteAnimatorAction__Class* klass;
    MonitorData* monitor;
    struct SpriteAnimatorAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAnimatorAction_FWDDECL)
#define IL2CPP_STRUCT_SpriteAnimatorAction_FWDDECL
#include <Modloader/app/structs/SpriteAnimatorAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteAnimatorAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorAction_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAnimatorAction_FWDDECL)
#include <Modloader/app/structs/SpriteAnimatorAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAnimatorAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
