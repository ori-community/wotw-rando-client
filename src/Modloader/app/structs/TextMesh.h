#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMesh_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMesh_DEFINED)
#include <Modloader/app/structs/TextMesh__Fields.h>
#if defined(IL2CPP_STRUCT_TextMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_TextMesh_DEFINED
struct TextMesh__Class;
struct TextMesh {
    struct TextMesh__Class* klass;
    MonitorData* monitor;
    struct TextMesh__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMesh_FWDDECL)
#define IL2CPP_STRUCT_TextMesh_FWDDECL
#include <Modloader/app/structs/TextMesh__Class.h>
#endif
#undef IL2CPP_STRUCT_TextMesh_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMesh_DEFINED) && !defined(IL2CPP_STRUCT_TextMesh_FWDDECL)
#include <Modloader/app/structs/TextMesh.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMesh.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
