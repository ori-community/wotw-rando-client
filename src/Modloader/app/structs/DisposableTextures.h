#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisposableTextures_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisposableTextures_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisposableTextures_DEFINED)
#include <Modloader/app/structs/DisposableTextures__Fields.h>
#if defined(IL2CPP_STRUCT_DisposableTextures__Fields_DEFINED)
#define IL2CPP_STRUCT_DisposableTextures_DEFINED
struct DisposableTextures__Class;
struct DisposableTextures {
    struct DisposableTextures__Class* klass;
    MonitorData* monitor;
    struct DisposableTextures__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisposableTextures_FWDDECL)
#define IL2CPP_STRUCT_DisposableTextures_FWDDECL
#include <Modloader/app/structs/DisposableTextures__Class.h>
#endif
#undef IL2CPP_STRUCT_DisposableTextures_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisposableTextures_DEFINED) && !defined(IL2CPP_STRUCT_DisposableTextures_FWDDECL)
#include <Modloader/app/structs/DisposableTextures.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisposableTextures.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
