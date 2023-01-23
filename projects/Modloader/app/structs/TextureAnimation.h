#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimation_DEFINED)
#include <Modloader/app/structs/TextureAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_TextureAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureAnimation_DEFINED
struct TextureAnimation__Class;
struct TextureAnimation {
    struct TextureAnimation__Class* klass;
    MonitorData* monitor;
    struct TextureAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureAnimation_FWDDECL)
#define IL2CPP_STRUCT_TextureAnimation_FWDDECL
#include <Modloader/app/structs/TextureAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_TextureAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimation_DEFINED) && !defined(IL2CPP_STRUCT_TextureAnimation_FWDDECL)
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
