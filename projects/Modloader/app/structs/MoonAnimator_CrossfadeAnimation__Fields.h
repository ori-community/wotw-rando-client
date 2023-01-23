#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_DEFINED
struct MoonAnimator_AnimationInstance;
struct AnimationTransition;
struct MoonAnimator_CrossfadeAnimation__Fields {
    struct MoonAnimation__Fields _;
    struct MoonAnimator_AnimationInstance* Source;
    struct MoonAnimator_AnimationInstance* Target;
    struct AnimationTransition* Transition;
    struct Nullable_1_Single_ CrossfadeTimeOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationTransition.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_CrossfadeAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_CrossfadeAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_CrossfadeAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
