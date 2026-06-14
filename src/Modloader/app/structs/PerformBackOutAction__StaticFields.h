#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformBackOutAction__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformBackOutAction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformBackOutAction__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PerformBackOutAction__StaticFields_DEFINED
struct ConditionUberState;
struct PerformBackOutAction__StaticFields {
    bool AbandonChallangeActive;
    struct ConditionUberState* AbandonChallangeCondition;
};
#endif
#if !defined(IL2CPP_STRUCT_PerformBackOutAction__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PerformBackOutAction__StaticFields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#endif
#undef IL2CPP_STRUCT_PerformBackOutAction__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformBackOutAction__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PerformBackOutAction__StaticFields_FWDDECL)
#include <Modloader/app/structs/PerformBackOutAction__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformBackOutAction__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
