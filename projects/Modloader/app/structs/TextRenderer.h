#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextRenderer_DEFINED)
#include <Modloader/app/structs/TextRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_TextRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_TextRenderer_DEFINED
struct TextRenderer__Class;
struct TextRenderer {
    struct TextRenderer__Class* klass;
    MonitorData* monitor;
    struct TextRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextRenderer_FWDDECL)
#define IL2CPP_STRUCT_TextRenderer_FWDDECL
#include <Modloader/app/structs/TextRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_TextRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextRenderer_DEFINED) && !defined(IL2CPP_STRUCT_TextRenderer_FWDDECL)
#include <Modloader/app/structs/TextRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
