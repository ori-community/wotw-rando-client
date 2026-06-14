#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_DEFINED
struct FloatAnimationParameter;
struct SeinCharacter;
struct SeinAnimationParametersHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct FloatAnimationParameter* SlopeUpParam;
    struct FloatAnimationParameter* SlopeDownParam;
    struct FloatAnimationParameter* GroundParam;
    struct SeinCharacter* m_seinCharacter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinAnimationParametersHandler__Fields_FWDDECL)
#include <Modloader/app/structs/SeinAnimationParametersHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAnimationParametersHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
