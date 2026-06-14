#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAnimatorSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAnimatorSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorSerializer_DEFINED)
#include <Modloader/app/structs/SpriteAnimatorSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteAnimatorSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteAnimatorSerializer_DEFINED
struct SpriteAnimatorSerializer__Class;
struct SpriteAnimatorSerializer {
    struct SpriteAnimatorSerializer__Class* klass;
    MonitorData* monitor;
    struct SpriteAnimatorSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAnimatorSerializer_FWDDECL)
#define IL2CPP_STRUCT_SpriteAnimatorSerializer_FWDDECL
#include <Modloader/app/structs/SpriteAnimatorSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteAnimatorSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAnimatorSerializer_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAnimatorSerializer_FWDDECL)
#include <Modloader/app/structs/SpriteAnimatorSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAnimatorSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
