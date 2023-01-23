#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTexture_DEFINED)
#include <Modloader/app/structs/RenderTexture__Fields.h>
#if defined(IL2CPP_STRUCT_RenderTexture__Fields_DEFINED)
#define IL2CPP_STRUCT_RenderTexture_DEFINED
struct RenderTexture__Class;
struct RenderTexture {
    struct RenderTexture__Class* klass;
    MonitorData* monitor;
    struct RenderTexture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderTexture_FWDDECL)
#define IL2CPP_STRUCT_RenderTexture_FWDDECL
#include <Modloader/app/structs/RenderTexture__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTexture_DEFINED) && !defined(IL2CPP_STRUCT_RenderTexture_FWDDECL)
#include <Modloader/app/structs/RenderTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
