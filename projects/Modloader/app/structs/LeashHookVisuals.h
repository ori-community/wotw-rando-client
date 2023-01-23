#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeashHookVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeashHookVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookVisuals_DEFINED)
#include <Modloader/app/structs/LeashHookVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_LeashHookVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_LeashHookVisuals_DEFINED
struct LeashHookVisuals__Class;
struct LeashHookVisuals {
    struct LeashHookVisuals__Class* klass;
    MonitorData* monitor;
    struct LeashHookVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeashHookVisuals_FWDDECL)
#define IL2CPP_STRUCT_LeashHookVisuals_FWDDECL
#include <Modloader/app/structs/LeashHookVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_LeashHookVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookVisuals_DEFINED) && !defined(IL2CPP_STRUCT_LeashHookVisuals_FWDDECL)
#include <Modloader/app/structs/LeashHookVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeashHookVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
