#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LateStartHook_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LateStartHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_LateStartHook_DEFINED)
#include <Modloader/app/structs/LateStartHook__Fields.h>
#if defined(IL2CPP_STRUCT_LateStartHook__Fields_DEFINED)
#define IL2CPP_STRUCT_LateStartHook_DEFINED
struct LateStartHook__Class;
struct LateStartHook {
    struct LateStartHook__Class* klass;
    MonitorData* monitor;
    struct LateStartHook__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LateStartHook_FWDDECL)
#define IL2CPP_STRUCT_LateStartHook_FWDDECL
#include <Modloader/app/structs/LateStartHook__Class.h>
#endif
#undef IL2CPP_STRUCT_LateStartHook_INITIALIZING
#if !defined(IL2CPP_STRUCT_LateStartHook_DEFINED) && !defined(IL2CPP_STRUCT_LateStartHook_FWDDECL)
#include <Modloader/app/structs/LateStartHook.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LateStartHook.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
