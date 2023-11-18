#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_UberStateApplyContext__Enum_DEFINED)
#define IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_DEFINED
struct IPassiveStateDescriptor;
struct StateOverrideSystem_PassiveStateOverride {
    struct IPassiveStateDescriptor* Descriptor;
    struct Nullable_1_Int32_ DynamicDesiredState;
    int32_t StaticDesiredState;
    UberStateApplyContext__Enum ApplyContextStatic;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_FWDDECL)
#define IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_FWDDECL
#include <Modloader/app/structs/IPassiveStateDescriptor.h>
#endif
#undef IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_DEFINED) && !defined(IL2CPP_STRUCT_StateOverrideSystem_PassiveStateOverride_FWDDECL)
#include <Modloader/app/structs/StateOverrideSystem_PassiveStateOverride.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateOverrideSystem_PassiveStateOverride.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
