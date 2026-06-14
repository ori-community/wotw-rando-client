#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEvents__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEvents__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SeinEvents__StaticFields_DEFINED
struct SeinEvents_AbilityEvents;
struct SeinEvents_KuAbilityEvents;
struct SeinEvents__StaticFields {
    struct SeinEvents_AbilityEvents* Abilities;
    struct SeinEvents_KuAbilityEvents* KuAbilities;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinEvents__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SeinEvents__StaticFields_FWDDECL
#include <Modloader/app/structs/SeinEvents_AbilityEvents.h>
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents.h>
#endif
#undef IL2CPP_STRUCT_SeinEvents__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SeinEvents__StaticFields_FWDDECL)
#include <Modloader/app/structs/SeinEvents__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEvents__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
