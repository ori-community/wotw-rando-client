#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySpiritLeashHook_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySpiritLeashHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySpiritLeashHook_DEFINED)
#include <Modloader/app/structs/LegacySpiritLeashHook__Fields.h>
#if defined(IL2CPP_STRUCT_LegacySpiritLeashHook__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacySpiritLeashHook_DEFINED
struct LegacySpiritLeashHook__Class;
struct LegacySpiritLeashHook {
    struct LegacySpiritLeashHook__Class* klass;
    MonitorData* monitor;
    struct LegacySpiritLeashHook__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySpiritLeashHook_FWDDECL)
#define IL2CPP_STRUCT_LegacySpiritLeashHook_FWDDECL
#include <Modloader/app/structs/LegacySpiritLeashHook__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacySpiritLeashHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySpiritLeashHook_DEFINED) && !defined(IL2CPP_STRUCT_LegacySpiritLeashHook_FWDDECL)
#include <Modloader/app/structs/LegacySpiritLeashHook.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySpiritLeashHook.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
