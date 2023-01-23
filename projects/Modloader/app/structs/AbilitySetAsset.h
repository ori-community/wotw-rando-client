#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbilitySetAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbilitySetAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilitySetAsset_DEFINED)
#include <Modloader/app/structs/AbilitySetAsset__Fields.h>
#if defined(IL2CPP_STRUCT_AbilitySetAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_AbilitySetAsset_DEFINED
struct AbilitySetAsset__Class;
struct AbilitySetAsset {
    struct AbilitySetAsset__Class* klass;
    MonitorData* monitor;
    struct AbilitySetAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbilitySetAsset_FWDDECL)
#define IL2CPP_STRUCT_AbilitySetAsset_FWDDECL
#include <Modloader/app/structs/AbilitySetAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_AbilitySetAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilitySetAsset_DEFINED) && !defined(IL2CPP_STRUCT_AbilitySetAsset_FWDDECL)
#include <Modloader/app/structs/AbilitySetAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbilitySetAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
