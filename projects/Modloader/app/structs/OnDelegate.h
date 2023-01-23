#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnDelegate_DEFINED)
#include <Modloader/app/structs/OnDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_OnDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_OnDelegate_DEFINED
struct OnDelegate__Class;
struct OnDelegate {
    struct OnDelegate__Class* klass;
    MonitorData* monitor;
    struct OnDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnDelegate_FWDDECL)
#define IL2CPP_STRUCT_OnDelegate_FWDDECL
#include <Modloader/app/structs/OnDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_OnDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnDelegate_DEFINED) && !defined(IL2CPP_STRUCT_OnDelegate_FWDDECL)
#include <Modloader/app/structs/OnDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
