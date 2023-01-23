#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEvents_AbilityEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEvents_AbilityEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents_DEFINED)
#include <Modloader/app/structs/SeinEvents_AbilityEvents__Fields.h>
#if defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinEvents_AbilityEvents_DEFINED
struct SeinEvents_AbilityEvents__Class;
struct SeinEvents_AbilityEvents {
    struct SeinEvents_AbilityEvents__Class* klass;
    MonitorData* monitor;
    struct SeinEvents_AbilityEvents__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents_FWDDECL)
#define IL2CPP_STRUCT_SeinEvents_AbilityEvents_FWDDECL
#include <Modloader/app/structs/SeinEvents_AbilityEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinEvents_AbilityEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents_DEFINED) && !defined(IL2CPP_STRUCT_SeinEvents_AbilityEvents_FWDDECL)
#include <Modloader/app/structs/SeinEvents_AbilityEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEvents_AbilityEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
