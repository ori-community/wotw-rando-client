#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBoxVisibility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBoxVisibility_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxVisibility_DEFINED)
#include <Modloader/app/structs/MessageBoxVisibility__Fields.h>
#if defined(IL2CPP_STRUCT_MessageBoxVisibility__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageBoxVisibility_DEFINED
struct MessageBoxVisibility__Class;
struct MessageBoxVisibility {
    struct MessageBoxVisibility__Class* klass;
    MonitorData* monitor;
    struct MessageBoxVisibility__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBoxVisibility_FWDDECL)
#define IL2CPP_STRUCT_MessageBoxVisibility_FWDDECL
#include <Modloader/app/structs/MessageBoxVisibility__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageBoxVisibility_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxVisibility_DEFINED) && !defined(IL2CPP_STRUCT_MessageBoxVisibility_FWDDECL)
#include <Modloader/app/structs/MessageBoxVisibility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBoxVisibility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
