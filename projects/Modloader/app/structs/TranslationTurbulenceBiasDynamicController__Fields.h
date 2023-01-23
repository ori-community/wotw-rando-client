#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_DEFINED
struct MoonVector3;
struct MoonBool;
struct GenericSpring1D;
struct Renderer;
struct GenericSpring1D_Particle;
struct TranslationTurbulenceBiasDynamicController__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonVector3* Speed;
    struct MoonBool* ShouldFlip;
    struct GenericSpring1D* Spring;
    float XMultiplier;
    float YMultiplier;
    struct Renderer* Renderer;
    struct GenericSpring1D_Particle* m_springSettingsX;
    struct GenericSpring1D_Particle* m_springSettingsY;
    struct Vector4 m_biasSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_FWDDECL)
#define IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_FWDDECL
#include <Modloader/app/structs/GenericSpring1D.h>
#include <Modloader/app/structs/GenericSpring1D_Particle.h>
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TranslationTurbulenceBiasDynamicController__Fields_FWDDECL)
#include <Modloader/app/structs/TranslationTurbulenceBiasDynamicController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TranslationTurbulenceBiasDynamicController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
