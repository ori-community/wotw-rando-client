#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsIdentity_DEFINED)
#include <Modloader/app/structs/WindowsIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_WindowsIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowsIdentity_DEFINED
struct WindowsIdentity__Class;
struct WindowsIdentity {
    struct WindowsIdentity__Class* klass;
    MonitorData* monitor;
    struct WindowsIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowsIdentity_FWDDECL)
#define IL2CPP_STRUCT_WindowsIdentity_FWDDECL
#include <Modloader/app/structs/WindowsIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_WindowsIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsIdentity_DEFINED) && !defined(IL2CPP_STRUCT_WindowsIdentity_FWDDECL)
#include <Modloader/app/structs/WindowsIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
