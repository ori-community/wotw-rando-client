#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredPlayerAbilityState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredPlayerAbilityState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredPlayerAbilityState_DEFINED)
#include <Modloader/app/structs/DesiredPlayerAbilityState__Fields.h>
#if defined(IL2CPP_STRUCT_DesiredPlayerAbilityState__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredPlayerAbilityState_DEFINED
struct DesiredPlayerAbilityState__Class;
struct DesiredPlayerAbilityState {
    struct DesiredPlayerAbilityState__Class* klass;
    MonitorData* monitor;
    struct DesiredPlayerAbilityState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesiredPlayerAbilityState_FWDDECL)
#define IL2CPP_STRUCT_DesiredPlayerAbilityState_FWDDECL
#include <Modloader/app/structs/DesiredPlayerAbilityState__Class.h>
#endif
#undef IL2CPP_STRUCT_DesiredPlayerAbilityState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredPlayerAbilityState_DEFINED) && !defined(IL2CPP_STRUCT_DesiredPlayerAbilityState_FWDDECL)
#include <Modloader/app/structs/DesiredPlayerAbilityState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredPlayerAbilityState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
