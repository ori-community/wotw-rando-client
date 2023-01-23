#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpecialAbilityZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpecialAbilityZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpecialAbilityZone_DEFINED)
#include <Modloader/app/structs/SpecialAbilityZone__Fields.h>
#if defined(IL2CPP_STRUCT_SpecialAbilityZone__Fields_DEFINED)
#define IL2CPP_STRUCT_SpecialAbilityZone_DEFINED
struct SpecialAbilityZone__Class;
struct SpecialAbilityZone {
    struct SpecialAbilityZone__Class* klass;
    MonitorData* monitor;
    struct SpecialAbilityZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpecialAbilityZone_FWDDECL)
#define IL2CPP_STRUCT_SpecialAbilityZone_FWDDECL
#include <Modloader/app/structs/SpecialAbilityZone__Class.h>
#endif
#undef IL2CPP_STRUCT_SpecialAbilityZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpecialAbilityZone_DEFINED) && !defined(IL2CPP_STRUCT_SpecialAbilityZone_FWDDECL)
#include <Modloader/app/structs/SpecialAbilityZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpecialAbilityZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
