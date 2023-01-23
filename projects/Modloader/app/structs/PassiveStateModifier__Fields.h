#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PassiveStateModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PassiveStateModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PassiveStateModifier__Fields_DEFINED)
#include <Modloader/app/structs/SetupStateModifierData__Fields.h>
#if defined(IL2CPP_STRUCT_SetupStateModifierData__Fields_DEFINED)
#define IL2CPP_STRUCT_PassiveStateModifier__Fields_DEFINED
struct IPassiveStateDescriptor;
struct PassiveStateModifier__Fields {
    struct SetupStateModifierData__Fields _;
    struct IPassiveStateDescriptor* _Controller_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PassiveStateModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_PassiveStateModifier__Fields_FWDDECL
#include <Modloader/app/structs/IPassiveStateDescriptor.h>
#endif
#undef IL2CPP_STRUCT_PassiveStateModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PassiveStateModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PassiveStateModifier__Fields_FWDDECL)
#include <Modloader/app/structs/PassiveStateModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PassiveStateModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
