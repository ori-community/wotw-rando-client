#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugFrozenState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugFrozenState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugFrozenState__Fields_DEFINED)
#include <Modloader/app/structs/SlugState__Fields.h>
#if defined(IL2CPP_STRUCT_SlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugFrozenState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct SlugFrozenState__Fields {
    struct SlugState__Fields _;
    struct TextureAnimationWithTransitions* Frozen;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugFrozenState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SlugFrozenState__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_SlugFrozenState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugFrozenState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SlugFrozenState__Fields_FWDDECL)
#include <Modloader/app/structs/SlugFrozenState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugFrozenState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
