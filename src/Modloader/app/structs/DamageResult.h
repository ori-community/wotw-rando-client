#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResult_DEFINED)
#include <Modloader/app/structs/DamageRecieverType__Enum.h>
#include <Modloader/app/structs/DamageResultType__Enum.h>
#if defined(IL2CPP_STRUCT_DamageResultType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageRecieverType__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageResult_DEFINED
struct Damage;
struct IDamageReciever;
struct DamageResult {
    struct Damage* Damage;
    float AmountReceived;
    int32_t TickNumber;
    DamageResultType__Enum ResultType;

    struct IDamageReciever* DamageReceiver;
    DamageRecieverType__Enum DamageRecieverType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageResult_FWDDECL)
#define IL2CPP_STRUCT_DamageResult_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/IDamageReciever.h>
#endif
#undef IL2CPP_STRUCT_DamageResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResult_DEFINED) && !defined(IL2CPP_STRUCT_DamageResult_FWDDECL)
#include <Modloader/app/structs/DamageResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
