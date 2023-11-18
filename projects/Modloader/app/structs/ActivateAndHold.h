#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateAndHold_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateAndHold_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAndHold_DEFINED)
#include <Modloader/app/structs/ActivateAndHold__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateAndHold__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateAndHold_DEFINED
struct ActivateAndHold__Class;
struct ActivateAndHold {
    struct ActivateAndHold__Class* klass;
    MonitorData* monitor;
    struct ActivateAndHold__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateAndHold_FWDDECL)
#define IL2CPP_STRUCT_ActivateAndHold_FWDDECL
#include <Modloader/app/structs/ActivateAndHold__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateAndHold_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAndHold_DEFINED) && !defined(IL2CPP_STRUCT_ActivateAndHold_FWDDECL)
#include <Modloader/app/structs/ActivateAndHold.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateAndHold.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
