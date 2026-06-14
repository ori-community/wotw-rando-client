#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GUIController__StaticFields_DEFINED
struct String__Array;
struct GUIController__StaticFields {
    struct String__Array* contentOptions;
    struct String__Array* alignmentOptions;
    struct String__Array* modifierOptions;
    struct String__Array* shaderOptions;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GUIController__StaticFields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_GUIController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GUIController__StaticFields_FWDDECL)
#include <Modloader/app/structs/GUIController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
