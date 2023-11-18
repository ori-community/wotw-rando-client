#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionBasedSoundProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionBasedSoundProvider_DEFINED)
#include <Modloader/app/structs/ConditionBasedSoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionBasedSoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionBasedSoundProvider_DEFINED
struct ConditionBasedSoundProvider__Class;
struct ConditionBasedSoundProvider {
    struct ConditionBasedSoundProvider__Class* klass;
    MonitorData* monitor;
    struct ConditionBasedSoundProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionBasedSoundProvider_FWDDECL)
#define IL2CPP_STRUCT_ConditionBasedSoundProvider_FWDDECL
#include <Modloader/app/structs/ConditionBasedSoundProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionBasedSoundProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionBasedSoundProvider_DEFINED) && !defined(IL2CPP_STRUCT_ConditionBasedSoundProvider_FWDDECL)
#include <Modloader/app/structs/ConditionBasedSoundProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionBasedSoundProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
