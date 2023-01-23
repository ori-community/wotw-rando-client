#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteAtlasManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteAtlasManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAtlasManager_DEFINED)
#define IL2CPP_STRUCT_SpriteAtlasManager_DEFINED
struct SpriteAtlasManager__Class;
struct SpriteAtlasManager {
    struct SpriteAtlasManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SpriteAtlasManager_FWDDECL)
#define IL2CPP_STRUCT_SpriteAtlasManager_FWDDECL
#include <Modloader/app/structs/SpriteAtlasManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteAtlasManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteAtlasManager_DEFINED) && !defined(IL2CPP_STRUCT_SpriteAtlasManager_FWDDECL)
#include <Modloader/app/structs/SpriteAtlasManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteAtlasManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
