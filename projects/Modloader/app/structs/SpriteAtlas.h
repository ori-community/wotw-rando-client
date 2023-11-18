#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAtlas_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAtlas_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAtlas_DEFINED)
#include <Modloader/app/structs/SpriteAtlas__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteAtlas__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteAtlas_DEFINED
struct SpriteAtlas__Class;
struct SpriteAtlas {
    struct SpriteAtlas__Class* klass;
    MonitorData* monitor;
    struct SpriteAtlas__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteAtlas_FWDDECL)
#define IL2CPP_STRUCT_SpriteAtlas_FWDDECL
#include <Modloader/app/structs/SpriteAtlas__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteAtlas_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAtlas_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAtlas_FWDDECL)
#include <Modloader/app/structs/SpriteAtlas.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAtlas.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
