#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_MoonFlagsSystem_HiddenFlagModification_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_MoonFlagsSystem_HiddenFlagModification__DEFINED)
#define IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_DEFINED
struct Renderer;
struct __declspec(align(8)) MoonFlagsSystem_ObjectState__Fields {
    struct Renderer* Renderer;
    struct Nullable_1_MoonFlagsSystem_HiddenFlagModification_ StaticHiddenFlagModification;
    struct Nullable_1_MoonFlagsSystem_HiddenFlagModification_ DynamicHiddenFlagModification;
    bool HiddenFlagChangedThisFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_FWDDECL)
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
