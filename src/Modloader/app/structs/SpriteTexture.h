#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteTexture_DEFINED)
#include <Modloader/app/structs/SpriteTexture__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteTexture__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteTexture_DEFINED
struct SpriteTexture__Class;
struct SpriteTexture {
    struct SpriteTexture__Class* klass;
    MonitorData* monitor;
    struct SpriteTexture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteTexture_FWDDECL)
#define IL2CPP_STRUCT_SpriteTexture_FWDDECL
#include <Modloader/app/structs/SpriteTexture__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteTexture_DEFINED) && !defined(IL2CPP_STRUCT_SpriteTexture_FWDDECL)
#include <Modloader/app/structs/SpriteTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
