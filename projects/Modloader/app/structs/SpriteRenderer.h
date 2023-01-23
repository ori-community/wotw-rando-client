#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteRenderer_DEFINED)
#include <Modloader/app/structs/SpriteRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_SpriteRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_SpriteRenderer_DEFINED
struct SpriteRenderer__Class;
struct SpriteRenderer {
    struct SpriteRenderer__Class* klass;
    MonitorData* monitor;
    struct SpriteRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpriteRenderer_FWDDECL)
#define IL2CPP_STRUCT_SpriteRenderer_FWDDECL
#include <Modloader/app/structs/SpriteRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_SpriteRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteRenderer_DEFINED) && !defined(IL2CPP_STRUCT_SpriteRenderer_FWDDECL)
#include <Modloader/app/structs/SpriteRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
