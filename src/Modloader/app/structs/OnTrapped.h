#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnTrapped_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnTrapped_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnTrapped_DEFINED)
#include <Modloader/app/structs/OnTrapped__Fields.h>
#if defined(IL2CPP_STRUCT_OnTrapped__Fields_DEFINED)
#define IL2CPP_STRUCT_OnTrapped_DEFINED
struct OnTrapped__Class;
struct OnTrapped {
    struct OnTrapped__Class* klass;
    MonitorData* monitor;
    struct OnTrapped__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnTrapped_FWDDECL)
#define IL2CPP_STRUCT_OnTrapped_FWDDECL
#include <Modloader/app/structs/OnTrapped__Class.h>
#endif
#undef IL2CPP_STRUCT_OnTrapped_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnTrapped_DEFINED) && !defined(IL2CPP_STRUCT_OnTrapped_FWDDECL)
#include <Modloader/app/structs/OnTrapped.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnTrapped.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
