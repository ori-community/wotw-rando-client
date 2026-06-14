#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MistController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MistController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MistController__Fields_DEFINED
struct LegacyTransparancyAnimator;
struct MistController__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyTransparancyAnimator* MistAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MistController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MistController__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTransparancyAnimator.h>
#endif
#undef IL2CPP_STRUCT_MistController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MistController__Fields_FWDDECL)
#include <Modloader/app/structs/MistController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MistController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
