#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_TexturePreview_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_TexturePreview_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_TexturePreview_DEFINED)
#include <Modloader/app/structs/P3D_TexturePreview__Fields.h>
#if defined(IL2CPP_STRUCT_P3D_TexturePreview__Fields_DEFINED)
#define IL2CPP_STRUCT_P3D_TexturePreview_DEFINED
struct P3D_TexturePreview__Class;
struct P3D_TexturePreview {
    struct P3D_TexturePreview__Class* klass;
    MonitorData* monitor;
    struct P3D_TexturePreview__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_TexturePreview_FWDDECL)
#define IL2CPP_STRUCT_P3D_TexturePreview_FWDDECL
#include <Modloader/app/structs/P3D_TexturePreview__Class.h>
#endif
#undef IL2CPP_STRUCT_P3D_TexturePreview_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_TexturePreview_DEFINED) && !defined(IL2CPP_STRUCT_P3D_TexturePreview_FWDDECL)
#include <Modloader/app/structs/P3D_TexturePreview.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_TexturePreview.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
