#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureOffsetModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureOffsetModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureOffsetModifier_DEFINED)
#include <Modloader/app/structs/TextureOffsetModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TextureOffsetModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureOffsetModifier_DEFINED
struct TextureOffsetModifier__Class;
struct TextureOffsetModifier {
    struct TextureOffsetModifier__Class* klass;
    MonitorData* monitor;
    struct TextureOffsetModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureOffsetModifier_FWDDECL)
#define IL2CPP_STRUCT_TextureOffsetModifier_FWDDECL
#include <Modloader/app/structs/TextureOffsetModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_TextureOffsetModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureOffsetModifier_DEFINED) && !defined(IL2CPP_STRUCT_TextureOffsetModifier_FWDDECL)
#include <Modloader/app/structs/TextureOffsetModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureOffsetModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
