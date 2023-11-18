#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAnimatorCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAnimatorCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorCondition_DEFINED)
#include <Modloader/app/structs/SpriteAnimatorCondition__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteAnimatorCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteAnimatorCondition_DEFINED
struct SpriteAnimatorCondition__Class;
struct SpriteAnimatorCondition {
    struct SpriteAnimatorCondition__Class* klass;
    MonitorData* monitor;
    struct SpriteAnimatorCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAnimatorCondition_FWDDECL)
#define IL2CPP_STRUCT_SpriteAnimatorCondition_FWDDECL
#include <Modloader/app/structs/SpriteAnimatorCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteAnimatorCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorCondition_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAnimatorCondition_FWDDECL)
#include <Modloader/app/structs/SpriteAnimatorCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAnimatorCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
