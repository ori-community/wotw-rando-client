#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateCooldownRule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateCooldownRule_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateCooldownRule_DEFINED)
#include <Modloader/app/structs/ActivateCooldownRule__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateCooldownRule__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateCooldownRule_DEFINED
struct ActivateCooldownRule__Class;
struct ActivateCooldownRule {
    struct ActivateCooldownRule__Class* klass;
    MonitorData* monitor;
    struct ActivateCooldownRule__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateCooldownRule_FWDDECL)
#define IL2CPP_STRUCT_ActivateCooldownRule_FWDDECL
#include <Modloader/app/structs/ActivateCooldownRule__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateCooldownRule_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateCooldownRule_DEFINED) && !defined(IL2CPP_STRUCT_ActivateCooldownRule_FWDDECL)
#include <Modloader/app/structs/ActivateCooldownRule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateCooldownRule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
