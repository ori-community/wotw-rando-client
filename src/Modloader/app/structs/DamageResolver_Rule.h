#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageResolver_Rule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageResolver_Rule_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResolver_Rule_DEFINED)
#include <Modloader/app/structs/DamageResolver_Rule__Fields.h>
#if defined(IL2CPP_STRUCT_DamageResolver_Rule__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageResolver_Rule_DEFINED
struct DamageResolver_Rule__Class;
struct DamageResolver_Rule {
    struct DamageResolver_Rule__Class* klass;
    MonitorData* monitor;
    struct DamageResolver_Rule__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageResolver_Rule_FWDDECL)
#define IL2CPP_STRUCT_DamageResolver_Rule_FWDDECL
#include <Modloader/app/structs/DamageResolver_Rule__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageResolver_Rule_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageResolver_Rule_DEFINED) && !defined(IL2CPP_STRUCT_DamageResolver_Rule_FWDDECL)
#include <Modloader/app/structs/DamageResolver_Rule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageResolver_Rule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
