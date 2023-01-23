#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureGuid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureGuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureGuid_DEFINED)
#include <Modloader/app/structs/TextureGuid__Fields.h>
#if defined(IL2CPP_STRUCT_TextureGuid__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureGuid_DEFINED
struct TextureGuid__Class;
struct TextureGuid {
    struct TextureGuid__Class* klass;
    MonitorData* monitor;
    struct TextureGuid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureGuid_FWDDECL)
#define IL2CPP_STRUCT_TextureGuid_FWDDECL
#include <Modloader/app/structs/TextureGuid__Class.h>
#endif
#undef IL2CPP_STRUCT_TextureGuid_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureGuid_DEFINED) && !defined(IL2CPP_STRUCT_TextureGuid_FWDDECL)
#include <Modloader/app/structs/TextureGuid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureGuid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
