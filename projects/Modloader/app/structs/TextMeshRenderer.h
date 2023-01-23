#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshRenderer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshRenderer_DEFINED)
#include <Modloader/app/structs/TextMeshRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_TextMeshRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_TextMeshRenderer_DEFINED
struct TextMeshRenderer__Class;
struct TextMeshRenderer {
    struct TextMeshRenderer__Class* klass;
    MonitorData* monitor;
    struct TextMeshRenderer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshRenderer_FWDDECL)
#define IL2CPP_STRUCT_TextMeshRenderer_FWDDECL
#include <Modloader/app/structs/TextMeshRenderer__Class.h>
#endif
#undef IL2CPP_STRUCT_TextMeshRenderer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshRenderer_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshRenderer_FWDDECL)
#include <Modloader/app/structs/TextMeshRenderer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshRenderer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
