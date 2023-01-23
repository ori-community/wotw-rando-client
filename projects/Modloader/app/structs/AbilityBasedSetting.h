#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbilityBasedSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbilityBasedSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilityBasedSetting_DEFINED)
#include <Modloader/app/structs/AbilityBasedSetting__Fields.h>
#if defined(IL2CPP_STRUCT_AbilityBasedSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_AbilityBasedSetting_DEFINED
struct AbilityBasedSetting__Class;
struct AbilityBasedSetting {
    struct AbilityBasedSetting__Class* klass;
    MonitorData* monitor;
    struct AbilityBasedSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbilityBasedSetting_FWDDECL)
#define IL2CPP_STRUCT_AbilityBasedSetting_FWDDECL
#include <Modloader/app/structs/AbilityBasedSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_AbilityBasedSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilityBasedSetting_DEFINED) && !defined(IL2CPP_STRUCT_AbilityBasedSetting_FWDDECL)
#include <Modloader/app/structs/AbilityBasedSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbilityBasedSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
