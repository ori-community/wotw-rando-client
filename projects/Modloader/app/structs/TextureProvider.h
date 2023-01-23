#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureProvider_DEFINED)
#include <Modloader/app/structs/TextureProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TextureProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureProvider_DEFINED
struct TextureProvider__Class;
struct TextureProvider {
    struct TextureProvider__Class* klass;
    MonitorData* monitor;
    struct TextureProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureProvider_FWDDECL)
#define IL2CPP_STRUCT_TextureProvider_FWDDECL
#include <Modloader/app/structs/TextureProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_TextureProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureProvider_DEFINED) && !defined(IL2CPP_STRUCT_TextureProvider_FWDDECL)
#include <Modloader/app/structs/TextureProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
