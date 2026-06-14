#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeakLocator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeakLocator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakLocator_DEFINED)
#include <Modloader/app/structs/LeakLocator__Fields.h>
#if defined(IL2CPP_STRUCT_LeakLocator__Fields_DEFINED)
#define IL2CPP_STRUCT_LeakLocator_DEFINED
struct LeakLocator__Class;
struct LeakLocator {
    struct LeakLocator__Class* klass;
    MonitorData* monitor;
    struct LeakLocator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeakLocator_FWDDECL)
#define IL2CPP_STRUCT_LeakLocator_FWDDECL
#include <Modloader/app/structs/LeakLocator__Class.h>
#endif
#undef IL2CPP_STRUCT_LeakLocator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakLocator_DEFINED) && !defined(IL2CPP_STRUCT_LeakLocator_FWDDECL)
#include <Modloader/app/structs/LeakLocator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeakLocator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
