#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateValidator_DEFINED)
#define IL2CPP_STRUCT_StateValidator_DEFINED
struct MoonReference_1_IUberState_;
struct AchievementAsset;
struct StateValidator {
    struct MoonReference_1_IUberState_* State;
    float DesiredValue;
    struct AchievementAsset* Achievement;
};
#endif
#if !defined(IL2CPP_STRUCT_StateValidator_FWDDECL)
#define IL2CPP_STRUCT_StateValidator_FWDDECL
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/MoonReference_1_IUberState_.h>
#endif
#undef IL2CPP_STRUCT_StateValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateValidator_DEFINED) && !defined(IL2CPP_STRUCT_StateValidator_FWDDECL)
#include <Modloader/app/structs/StateValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
