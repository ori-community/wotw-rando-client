#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectDisabler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectDisabler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectDisabler_DEFINED)
#include <Modloader/app/structs/ObjectDisabler__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectDisabler__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectDisabler_DEFINED
struct ObjectDisabler__Class;
struct ObjectDisabler {
    struct ObjectDisabler__Class* klass;
    MonitorData* monitor;
    struct ObjectDisabler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectDisabler_FWDDECL)
#define IL2CPP_STRUCT_ObjectDisabler_FWDDECL
#include <Modloader/app/structs/ObjectDisabler__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectDisabler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectDisabler_DEFINED) && !defined(IL2CPP_STRUCT_ObjectDisabler_FWDDECL)
#include <Modloader/app/structs/ObjectDisabler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectDisabler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
