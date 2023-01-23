#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DamageResultType_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DamageResultType__DEFINED)
#define IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_DEFINED
struct Damage;
struct __declspec(align(8)) DamageReceiver_DamageEntry__Fields {
    struct Damage* Damage;
    float TimeUntilNextTick;
    int32_t CurrentTick;
    struct Nullable_1_DamageResultType_ ResultOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_FWDDECL)
#include <Modloader/app/structs/DamageReceiver_DamageEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiver_DamageEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
