#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_DEFINED)
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents__Fields.h>
#if defined(IL2CPP_STRUCT_SeinEvents_KuAbilityEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_DEFINED
struct SeinEvents_KuAbilityEvents__Class;
struct SeinEvents_KuAbilityEvents {
    struct SeinEvents_KuAbilityEvents__Class* klass;
    MonitorData* monitor;
    struct SeinEvents_KuAbilityEvents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_FWDDECL)
#define IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_FWDDECL
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_DEFINED) && !defined(IL2CPP_STRUCT_SeinEvents_KuAbilityEvents_FWDDECL)
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEvents_KuAbilityEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
