#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlHurtState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlHurtState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlHurtState__Fields_DEFINED)
#include <Modloader/app/structs/DashOwlState__Fields.h>
#if defined(IL2CPP_STRUCT_DashOwlState__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlHurtState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct DashOwlHurtState__Fields {
    struct DashOwlState__Fields _;
    struct TextureAnimationWithTransitions* m_hurtFront;
    struct TextureAnimationWithTransitions* m_hurtBack;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlHurtState__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlHurtState__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_DashOwlHurtState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlHurtState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlHurtState__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlHurtState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlHurtState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
