#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimator_DEFINED)
#include <Modloader/app/structs/TextureAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_TextureAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureAnimator_DEFINED
struct TextureAnimator__Class;
struct TextureAnimator {
    struct TextureAnimator__Class* klass;
    MonitorData* monitor;
    struct TextureAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureAnimator_FWDDECL)
#define IL2CPP_STRUCT_TextureAnimator_FWDDECL
#include <Modloader/app/structs/TextureAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_TextureAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimator_DEFINED) && !defined(IL2CPP_STRUCT_TextureAnimator_FWDDECL)
#include <Modloader/app/structs/TextureAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
