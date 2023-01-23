#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultControls_Resources_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultControls_Resources_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultControls_Resources_DEFINED)
#define IL2CPP_STRUCT_DefaultControls_Resources_DEFINED
struct Sprite;
struct DefaultControls_Resources {
    struct Sprite* standard;
    struct Sprite* background;
    struct Sprite* inputField;
    struct Sprite* knob;
    struct Sprite* checkmark;
    struct Sprite* dropdown;
    struct Sprite* mask;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultControls_Resources_FWDDECL)
#define IL2CPP_STRUCT_DefaultControls_Resources_FWDDECL
#include <Modloader/app/structs/Sprite.h>
#endif
#undef IL2CPP_STRUCT_DefaultControls_Resources_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultControls_Resources_DEFINED) && !defined(IL2CPP_STRUCT_DefaultControls_Resources_FWDDECL)
#include <Modloader/app/structs/DefaultControls_Resources.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultControls_Resources.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
