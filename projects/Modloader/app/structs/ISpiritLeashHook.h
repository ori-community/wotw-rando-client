#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISpiritLeashHook_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISpiritLeashHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISpiritLeashHook_DEFINED)
#define IL2CPP_STRUCT_ISpiritLeashHook_DEFINED
struct ISpiritLeashHook__Class;
struct ISpiritLeashHook {
    struct ISpiritLeashHook__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISpiritLeashHook_FWDDECL)
#define IL2CPP_STRUCT_ISpiritLeashHook_FWDDECL
#include <Modloader/app/structs/ISpiritLeashHook__Class.h>
#endif
#undef IL2CPP_STRUCT_ISpiritLeashHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISpiritLeashHook_DEFINED) && !defined(IL2CPP_STRUCT_ISpiritLeashHook_FWDDECL)
#include <Modloader/app/structs/ISpiritLeashHook.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISpiritLeashHook.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
