#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_DEFINED
enum class DamageReceiver_DamageFilterType__Enum : int32_t {
    DontFilterByType = 0x00000000,
    IgnoreDamageType = 0x00000001,
    IgnoreAllButThisDamageType = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_FWDDECL)
#include <Modloader/app/structs/DamageReceiver_DamageFilterType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiver_DamageFilterType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
