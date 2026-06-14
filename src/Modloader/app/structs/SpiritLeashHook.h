#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLeashHook_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLeashHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashHook_DEFINED)
#include <Modloader/app/structs/SpiritLeashHook__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritLeashHook__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritLeashHook_DEFINED
struct SpiritLeashHook__Class;
struct SpiritLeashHook {
    struct SpiritLeashHook__Class* klass;
    MonitorData* monitor;
    struct SpiritLeashHook__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLeashHook_FWDDECL)
#define IL2CPP_STRUCT_SpiritLeashHook_FWDDECL
#include <Modloader/app/structs/SpiritLeashHook__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritLeashHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashHook_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLeashHook_FWDDECL)
#include <Modloader/app/structs/SpiritLeashHook.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLeashHook.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
