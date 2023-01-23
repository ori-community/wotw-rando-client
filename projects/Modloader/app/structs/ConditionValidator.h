#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionValidator_DEFINED)
#define IL2CPP_STRUCT_ConditionValidator_DEFINED
struct MoonReference_1_ConditionUberState_;
struct AchievementAsset;
struct ConditionValidator {
    struct MoonReference_1_ConditionUberState_* State;
    struct AchievementAsset* Achievement;
};
#endif
#if !defined(IL2CPP_STRUCT_ConditionValidator_FWDDECL)
#define IL2CPP_STRUCT_ConditionValidator_FWDDECL
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/MoonReference_1_ConditionUberState_.h>
#endif
#undef IL2CPP_STRUCT_ConditionValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionValidator_DEFINED) && !defined(IL2CPP_STRUCT_ConditionValidator_FWDDECL)
#include <Modloader/app/structs/ConditionValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
