#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LimitedLifetime__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LimitedLifetime__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimitedLifetime__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_LimitedLifetime__Fields_DEFINED
struct Func_1_Boolean_;
struct Action_1_LimitedLifetime_;
struct LimitedLifetime__Fields {
    struct Suspendable__Fields _;
    float Lifetime;
    float m_lifeTimeRemaining;
    struct Func_1_Boolean_* DestructionCondition;
    struct Action_1_LimitedLifetime_* OnBeforeDestroy;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LimitedLifetime__Fields_FWDDECL)
#define IL2CPP_STRUCT_LimitedLifetime__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_LimitedLifetime_.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_LimitedLifetime__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimitedLifetime__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LimitedLifetime__Fields_FWDDECL)
#include <Modloader/app/structs/LimitedLifetime__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LimitedLifetime__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
